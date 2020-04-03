/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 19:57:10 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 12:02:11 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

/*
** Il y a pas un constructeur normalement ?
*/

void PhoneBook::init()
{
	index = 0;
	contactCounter = 0;
}

void	PhoneBook::add(void)
{
	if (contactCounter == 8)
		std::cout << "You have reached the maximum of contacts" << std::endl;
	else
	{
		this->tabContact[this->index].newContact(this->index);
		this->contactCounter++;
		this->index++;
	}
}

/*
** https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
*/

void	PhoneBook::search()
{
	int	i;
	int x;

	i = -1;
	if (this->contactCounter == 0)
	{
		std::cout << "You don't have any contact yet" << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (++i < this->contactCounter)
		this->tabContact[i].showHeaderContact();
	std::cout << "|-------------------------------------------|" << std::endl;
	while ((std::cin >> x) == 0 || (x < 0 || x > this->contactCounter - 1))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Unknow Index" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (x >= 0)
		this->tabContact[x].showFullContact();
}
