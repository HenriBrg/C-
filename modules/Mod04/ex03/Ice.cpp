/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 22:06:37 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 00:16:29 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::Ice(Ice const & source): AMateria("ice") {
	this->_xp = source._xp;
}

Ice::~Ice() {
}

Ice & Ice::operator=(Ice const & source) {
	this->_xp = source._xp;
	return (*this);
}

AMateria *Ice::clone() const {
	Ice *tmp = new Ice(*this);
	return (tmp);
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
