/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 18:55:03 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 15:41:04 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"

/* CONSTRUCTORS & DESTRUCOR */

Sorcerer::Sorcerer(std::string const & name, std::string const & title): name(name), title(title) {
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & source): name(source.name), title(source.title) {
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

/* OVERLOADS */

Sorcerer & Sorcerer::operator=(Sorcerer const & source) {
	this->name = source.name;
	this->title = source.title;
	return (*this);
}

std::ostream &operator<<(std::ostream & out, Sorcerer const & s) {
	out << "I am " << s.getName() << ", the " << s.getTitle() << ", and I like ponies !" << std::endl;
	return (out);
}

/* GETTERS */

std::string const & Sorcerer::getName(void) const {
	return (this->name);
}

std::string const & Sorcerer::getTitle(void) const {
	return (this->title);
}

/* CORE CLASS FUNCTIONS */

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
