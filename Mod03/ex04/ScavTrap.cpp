/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:09:50 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default Constructo" << std::endl;
}


ScavTrap::ScavTrap(std::string const & name): ClapTrap(name) {
	std::cout << "(ScavTrap) Constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & obj): ClapTrap(obj.name) {
	std::cout << "Copy (ScavTrap) Constructor" << std::endl;
	ClapTrap::copy(obj);
}

ScavTrap::~ScavTrap() {
	std::cout << "(ScavTrap) Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & obj) {
	std::cout << "(ScavTrap) Equal Operator" << std::endl;
	ClapTrap::copy(obj);
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

void ScavTrap::challengeNewcomer(void) {
	std::string challenges[5] = {"Someone here ?", "That tickles !", "Ohh calm down !", "Outchhhh !", "Arghghghghghg"};

	std::cout << "(ScapTrap) Event : " << challenges[rand() % 5] << std::endl;
}
