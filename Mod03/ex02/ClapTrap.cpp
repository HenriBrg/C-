/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 23:53:35 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:13:07 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name):
	name(name)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDmg = 100;
	this->rangeAttackDmg = 100;
	this->armorDmgReduction = 100;
}

ClapTrap::ClapTrap(ClapTrap const & obj): name(obj.name) {
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	ClapTrap::copy(obj);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::copy(ClapTrap const &obj)
{
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDmg = obj.meleeAttackDmg;
	this->rangeAttackDmg = obj.rangeAttackDmg;
	this->armorDmgReduction = obj.armorDmgReduction;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "(FROM CLAPTRAP) " << this->name << " attaque " << target << " à distance, causant "
	<< this->rangeAttackDmg << " points de dégâts !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "(FROM CLAPTRAP) " << this->name << " attaque " << target << " au corps à corps, causant "
	<< this->meleeAttackDmg << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	int	realDmg = amount - this->armorDmgReduction;
	this->hitPoints -= realDmg;
	if (this->hitPoints < 0)
	{
		realDmg += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << "(FROM CLAPTRAP) " << this->name << " prend "
			<< realDmg << " point de dégat !" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {

	int heal = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		heal -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "(FROM CLAPTRAP) " << this->name << " s'est soigné et ses points de vie sont désormais de " << this->hitPoints << std::endl;

}
