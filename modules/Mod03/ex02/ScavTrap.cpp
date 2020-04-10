/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/10 22:07:58 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name): name(name) {
	std::cout << "ScavTrap Constructor" << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDmg = 30;
	this->rangeAttackDmg = 20;
	this->armorDmgReduction = 5;
}

ScavTrap::ScavTrap(ScavTrap const & obj): name(obj.name) {
	std::cout << "Copy ScavTrap Constructor" << std::endl;
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDmg = obj.meleeAttackDmg;
	this->rangeAttackDmg = obj.rangeAttackDmg;
	this->armorDmgReduction = obj.armorDmgReduction;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & obj) {
	std::cout << "ScavTrap Equal Operator" << std::endl;
	this->name = obj.name;
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDmg = obj.meleeAttackDmg;
	this->rangeAttackDmg = obj.rangeAttackDmg;
	this->armorDmgReduction = obj.armorDmgReduction;
	return (*this);
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "(ScavTrap) " << this->name << " attaque " << target << " à distance, causant "
	<< this->rangeAttackDmg << " points de dégâts !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "(ScavTrap) " << this->name << " attaque " << target << " au corps à corps, causant "
	<< this->meleeAttackDmg << " points de dégâts !" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount) {

	int	realDmg = amount - this->armorDmgReduction;
	this->hitPoints -= realDmg;
	if (this->hitPoints < 0)
	{
		realDmg += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << "(ScavTrap) " << this->name << " prend "
			<< realDmg << " point de dégat !" << std::endl;

}
void ScavTrap::beRepaired(unsigned int amount) {

	int heal = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		heal -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "(ScavTrap) " << this->name << " s'est soigné et ses points de vie sont désormais de " << this->hitPoints << std::endl;

}

void ScavTrap::challengeNewcomer(void) {
	std::string challenges[5] = {"Someone here ?", "That tickles !", "Ohh calm down !", "Outchhhh !", "Arghghghghghg"};

	std::cout << "ScapTrap Event : " << challenges[rand() % 5] << std::endl;
}
