/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:57:33 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 20:02:16 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {
	// std::cout << "Constructeur par défaut de la classe PowerFist" << std::endl;
}

PowerFist::PowerFist(PowerFist const & source): AWeapon(source) {
	// std::cout << "Constructeur de copie de la classe PowerFist" << std::endl;
}

PowerFist::~PowerFist() {
	// std::cout << "Destructeur de la classe PowerFist" << std::endl;
}

PowerFist & PowerFist::operator=(PowerFist const & source) {
	this->name = source.name;
	this->manaCost = source.manaCost;
	this->degats = source.degats;
	return (*this);
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
