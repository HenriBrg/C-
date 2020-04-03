/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 19:11:47 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 11:49:28 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void 	 Contact::showField(std::string field)
{
	std::cout << "|";
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
}

void	Contact::showFullContact()
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postalAddress << std::endl;
	std::cout << this->emailAddress << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->birthDayDate << std::endl;
	std::cout << this->favoriteMeal << std::endl;
	std::cout << this->underwearColor << std::endl;
	std::cout << this->darkestSecret << std::endl;
}

void	Contact::showHeaderContact()
{
	std::cout << "|" << std::setw(10) << this->index;
	showField(this->firstName);
	showField(this->lastName);
	showField(this->nickname);
	std::cout << "|" << std::endl;
	return ;
}

void 	Contact::newContact(int index)
{
	this->index = index;

	std::cout << " * First Name" << std::endl;
	std::cin >> this->firstName;

	std::cout << " * Last Name" << std::endl;
	std::cin >> this->lastName;

	std::cout << " * Nicknme" << std::endl;
	std::cin >> this->nickname;

	std::cout << " * Login" << std::endl;
	std::cin >> this->login;

	std::cout << " * Postal Address" << std::endl;
	std::cin >> this->postalAddress;

	std::cout << " * Email" << std::endl;
	std::cin >> this->emailAddress;

	std::cout << " * Phone Number" << std::endl;
	std::cin >> this->phoneNumber;

	std::cout << " * Birthday" << std::endl;
	std::cin >> this->birthDayDate;

	std::cout << " * Favorite Meal" << std::endl;
	std::cin >> this->favoriteMeal;

	std::cout << " * Underwear Color" << std::endl;
	std::cin >> this->underwearColor;

	std::cout << " * Darkest Secret" << std::endl;
	std::cin >> this->darkestSecret;
}
