NAME := fixed2.0
SRCFILES := main.cpp Fixed.cpp

CC = c++
LD = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

$(NAME):
	$(CC) $(CFLAGS) $(SRCFILES) -o $(NAME)

.PHONY: all debug fclean re

all: $(NAME)

debug: CFLAGS += -g3
debug:
	$(CC) $(CFLAGS) $(SRCFILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
