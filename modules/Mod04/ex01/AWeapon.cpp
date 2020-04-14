/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:29:31 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 20:01:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"

AWeapon::AWeapon() {
	// std::cout << "Constructeur par défaut de la classe AWeapon" << std::endl;
}

AWeapon::AWeapon(AWeapon const & source): name(source.name), degats(source.degats), manaCost(source.manaCost) {
	// std::cout << "Constructeur de copie de la classe AWeapon" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): name(name), degats(damage), manaCost(apcost) {
	// std::cout << "Constructeur [string-int-int] de la classe AWeapon" << std::endl;
}

AWeapon::~AWeapon() {
	// std::cout << "Destructeur de la classe AWeapon" << std::endl;
}

AWeapon & AWeapon::operator=(AWeapon const & source) {
	this->name = source.name;
	this->degats = source.degats;
	this->manaCost = source.manaCost;
	return (*this);
}

std::string const & AWeapon::getName() const {
	return (this->name);
}

int AWeapon::getAPCost() const {
	return (this->manaCost);
}
int AWeapon::getDamage() const {
	return (this->degats);
}
