/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 18:36:29 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:15:59 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	std::cout << "(NinjaTrap) default Constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name): ClapTrap(name) {
	std::cout << "(NinjaTrap) Constructor called" << std::endl;
	this->level = 1;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDmg = 60;
	this->rangeAttackDmg = 5;
	this->armorDmgReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &obj):
	ClapTrap(obj.name)
{
	std::cout << "(NinjaTrap) Constructor Copy called" << std::endl;
	ClapTrap::copy(obj);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "(NinjaTrap) Destructor called" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

void NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "(NinjaTrap) " << this->name << " attaque " << target << " à distance, causant "
	<< this->rangeAttackDmg << " points de dégâts !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "(NinjaTrap) " << this->name << " attaque " << target << " au corps à corps, causant "
	<< this->meleeAttackDmg << " points de dégâts !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap) {
	if (this->energyPoints > 10) {
		this->energyPoints -= 10;
		std::cout << "(NinjaTrap) Attack from a ninja to ClapTrap " << std::endl;
		trap.takeDamage(10);
	}
	else
		std::cout << "(NinjaTrap) No energy left !" << std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap &trap) {
	if (this->energyPoints > 10) {
		this->energyPoints -= 10;
		std::cout << "(NinjaTrap) Attack from a ninja to FragTrap" << std::endl;
		trap.takeDamage(10);
	}
	else
		std::cout << "(NinjaTrap) No energy left !" << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap &trap) {
	if (this->energyPoints > 10) {
		this->energyPoints -= 10;
		std::cout << "(NinjaTrap) Attack from a ninja to ScavTrap" << std::endl;
		trap.takeDamage(10);
	}
	else
		std::cout << "(NinjaTrap) No energy left !" << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &trap) {
	if (this->energyPoints > 10) {
		this->energyPoints -= 10;
		std::cout << "(NinjaTrap) Attack from a ninja to NinjaTrap, his mate may be ..." << std::endl;
		trap.takeDamage(10);
	}
	else
		std::cout << "(NinjaTrap) No energy left !" << std::endl;
}
