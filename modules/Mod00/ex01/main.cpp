/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 16:54:31 by henri             #+#    #+#             */
/*   Updated: 2020/04/02 23:44:21 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int		main(void)
{
	bool		x;
	std::string cmd;
	PhoneBook	phoneBook;

	x = true;
	phoneBook.init();
	while (x)
	{
		std::cout << "myAwesomePhoneBook [ADD SEARCH EXIT] ~ ";
		std::cin >> cmd;
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			x = false;
	}
	return (0);
}
