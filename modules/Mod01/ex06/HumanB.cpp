/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 23:03:52 by henri             #+#    #+#             */
/*   Updated: 2020/04/05 00:44:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string const &name):
	name(name), weapon(NULL) {

}

void HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
	std::cout << this->name << " has no weaopon " << std::endl;

}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}
