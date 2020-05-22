/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:57:33 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 20:02:10 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {
	// std::cout << "Constructeur par défaut de la classe PlasmaRifle" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & source): AWeapon(source) {
	// std::cout << "Constructeur de copie de la classe PlasmaRifle" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
	// std::cout << "Destructeur de la classe PlasmaRifle" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & source) {
	this->name = source.name;
	this->manaCost = source.manaCost;
	this->degats = source.degats;
	return (*this);
}

void PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}
