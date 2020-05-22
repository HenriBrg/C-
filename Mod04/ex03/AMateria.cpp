/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 18:42:55 by henri             #+#    #+#             */
/*   Updated: 2020/04/15 22:06:18 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type), _xp(0) {
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

unsigned int AMateria::getXP() const {
	return (this->_xp);
}

void AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}
