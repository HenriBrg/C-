/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/10 22:04:48 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name): name(name) {
	std::cout << "Constructor" << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDmg = 30;
	this->rangeAttackDmg = 20;
	this->armorDmgReduction = 5;
}

FragTrap::FragTrap(FragTrap const & obj): name(obj.name) {
	std::cout << "Copy Constructor" << std::endl;
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDmg = obj.meleeAttackDmg;
	this->rangeAttackDmg = obj.rangeAttackDmg;
	this->armorDmgReduction = obj.armorDmgReduction;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & obj) {
	std::cout << "Equal Operator" << std::endl;
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

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << this->name << " attaque " << target << " à distance, causant "
	<< this->rangeAttackDmg << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << this->name << " attaque " << target << " au corps à corps, causant "
	<< this->meleeAttackDmg << " points de dégâts !" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount) {

	int	realDmg = amount - this->armorDmgReduction;
	this->hitPoints -= realDmg;
	if (this->hitPoints < 0)
	{
		realDmg += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << this->name << " prend "
			<< realDmg << " point de dégat !" << std::endl;

}
void FragTrap::beRepaired(unsigned int amount) {

	int heal = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		heal -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << this->name << " s'est soigné et ses points de vie sont désormais de " << this->hitPoints << std::endl;

}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string tabAttacks[5] = {"Matraque", "Tazer", "MP15", "AK47", "BARRET CAL.50"};

	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << " attaque avec "
				<< tabAttacks[rand() % 5] << std::endl
				<< target << " et inflige " << ((rand() % 40))
				<< " de dégats !" << std::endl;
	}
	else
		std::cout << this->name << " n'a plus d'énergie !" << std::endl;
}
