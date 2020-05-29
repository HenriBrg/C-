/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 23:07:50 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:19:12 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "(SuperTrap) Default Constructor" << std::endl;
}

SuperTrap::SuperTrap(std::string const & name):
	ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << "(SuperTrap) Constructor" << std::endl;
	this->hitPoints = 1;
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->meleeAttackDmg = this->NinjaTrap::meleeAttackDmg;
	this->rangeAttackDmg = this->FragTrap::rangeAttackDmg;
	this->armorDmgReduction = this->FragTrap::armorDmgReduction;
}

SuperTrap::SuperTrap(SuperTrap const & obj):
	ClapTrap(obj.name), NinjaTrap(name), FragTrap(name)
{
	std::cout << "(SuperTrap) Copy Constructor" << std::endl;
	ClapTrap::copy(obj);
}

SuperTrap::~SuperTrap()
{
	std::cout << "(SuperTrap) Destructor" << std::endl;
}

/* On peut passer une classe A à une fonction qui attends une classe B si A hérite de B */
SuperTrap &SuperTrap::operator=(SuperTrap const & obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
