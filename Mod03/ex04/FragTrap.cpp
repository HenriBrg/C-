/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:10:22 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "MOUAHAHAHAHA Voici la machine de mort sans pitié, mais sans rien sur elle ;(" << std::endl;
}

FragTrap::FragTrap(std::string const & name): ClapTrap(name) {
	std::cout << "Constructor FragTrap which is child of ClapTrap" << std::endl;
	this->meleeAttackDmg = 30;
	this->rangeAttackDmg = 20;
	this->armorDmgReduction = 5;
}

FragTrap::FragTrap(FragTrap const & obj): ClapTrap(obj.name) {
	std::cout << "COPY - Constructor FragTrap which is child of ClapTrap" << std::endl;
	ClapTrap::copy(obj);
}

FragTrap::~FragTrap() {
	std::cout << "(FragTrap) Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & obj) {
	std::cout << "(FragTrap) Equal Operator" << std::endl;
	ClapTrap::copy(obj);
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "(FragTrap) " << this->name << " attaque " << target << " à distance, causant "
	<< this->rangeAttackDmg << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "(FragTrap) " << this->name << " attaque " << target << " au corps à corps, causant "
	<< this->meleeAttackDmg << " points de dégâts !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string tabAttacks[5] = {"Matraque", "Tazer", "MP15", "AK47", "BARRET CAL.50"};

	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << "(FragTrap) " << this->name << " attaque " << target << " avec "
				<< tabAttacks[rand() % 5]  << " et inflige " << ((rand() % 40))
				<< " de dégats !" << std::endl;
	}
	else
		std::cout << this->name << " n'a plus d'énergie !" << std::endl;
}
