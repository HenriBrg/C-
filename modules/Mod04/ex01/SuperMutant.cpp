/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:33:32 by ncolomer          #+#    #+#             */
/*   Updated: 2020/04/14 19:36:24 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &source): Enemy(source) {
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &source) {
	this->type = source.type;
	this->hp = source.hp;
	return (*this);
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}
