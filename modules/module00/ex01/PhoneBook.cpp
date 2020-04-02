/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 19:57:10 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 00:43:53 by henri            ###   ########.fr       */
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

void	PhoneBook::search()
{
	return ;
}
