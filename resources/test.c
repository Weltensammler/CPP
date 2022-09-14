# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <stdlib.h>
# include <stdbool.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return(i);
}

void ft_error(char *msg, char *arg)
{
    write(2, msg, ft_strlen(msg));
    write(2, arg, ft_strlen(arg));
    write(2, "\n", 1);
}

int main(int argc, char **argv, char **env)
{
    if (argc < 2) //erstes Argument Programmname deshalb Ende wenn nur  
        return(0);
    int count = 1;
    for(int i = 0; argv[i]; i++) // Anzahl Pipes und Semicolons werden gezählt
    {
        if (argv[i] && (!strcmp(argv[i], "|") || !strcmp(argv[i], ";")))
        {
            count++;
            while(!strcmp(argv[i], ";"))
                i++;
            if(!strcmp(argv[i], ";")) //useless
                i--;
        }
    }

    bool type[count];
    int pos[count];
    int cmd = 0;
    pos[0] = 1;

    for(int i = 0; i < count; i++)
        type[i] = 0;

    for(int i = 0; argv[i]; i++)
    {
        if (argv[i] && !strcmp(argv[i], "|"))
        {
            pos[cmd + 1] = i + 1;
            type[cmd++] = 1;
            argv[i] = NULL;
        }
        else if (argv[i] && !strcmp(argv[i], ";"))
        {
            while (argv[i] && !strcmp(argv[i], ";"))
                argv[i++] = NULL;
            pos[1 + cmd++] = i;
        }
    }

    int fd[2];
    int fdd = 0;
    pid_t pid;

    for (int i = 0; i < count; i++)
    {
        if (argv[pos[i]] && !strcmp(argv[pos[i]], "cd"))
        {

            if (!argv[pos[i] + 1] || argv[pos[i] + 2])
                ft_error("error: cd: bad arguments", "");
            else if (chdir(argv[pos[i] + 1]))
            {
                ft_error("error: cd: cannot change directory to ", argv[pos[i] + 1]);
                exit(0);
            }
        }
        else
        {
            if (pipe(fd) == -1) // 2 neue fd's werden im array gespeichert
                ft_error("error: fatal", "");
            if ((pid = fork()) == -1)
                ft_error("error: fatal", "");
            if (!pid)
            {
                dup2(fdd, 0);
                if (type[i] == 1)
                    dup2(fd[1], 1);
                if (execve(argv[pos[i]], &argv[pos[i]], env) == -1)
                    ft_error("error: cannot execute ", argv[pos[i]]);
            }
            else
            {
                waitpid(pid, NULL, 0);
                close(fdd);
                close(fd[1]);
                fdd = fd[0];
            }
        }
    }
    return(0);
}
