/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 18:55:03 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 00:33:36 by henri            ###   ########.fr       */
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
	this->name = other.name;
	this->title = other.title;
	return (*this);
}

/* CORE CLASS FUNCTIONS */

std::ostream &operator<<(std::ostream & out, Sorcerer const & obj) {
	out << "I am " << obj.name << ", the " << obj.title << " Magnificent, and I like ponies !";
	return (out);
}
