/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 19:27:46 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 00:19:26 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP


# include <iostream>
# include <string>
# include "Contact.hpp"

/*
** http://www.cplusplus.com/reference/iomanip/
** http://www.cplusplus.com/reference/string/string/
*/

class PhoneBook
{
	public:
		void 	init();
		void	add();
		void	search();
	private:
		int		index;
		int		contactCounter;
		Contact tabContact[8];
};

#endif
