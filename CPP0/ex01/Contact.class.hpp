/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:15:42 by bschende          #+#    #+#             */
/*   Updated: 2022/08/22 17:09:17 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
private:
	char	*fname;
	char	*lname;
	char	*nname;
	char	*phone;
	char	*dsecret;
	
public:
	Contact(void);
	void details(void);
	~Contact(void);
};

#endif
