/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 22:06:37 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 00:16:51 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(Cure const & source): AMateria("cure") {
	this->_xp = source._xp;
}

Cure::~Cure() {
}

Cure & Cure::operator=(Cure const & source) {
	this->_xp = source._xp;
	return (*this);
}

AMateria *Cure::clone() const {
	Cure *tmp = new Cure(*this);
	return (tmp);
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
