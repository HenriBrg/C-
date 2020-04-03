/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 22:26:35 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 01:21:53 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string const &type, std::string const &name):
	type(type), name(name) {}

void 	Zombie::advert(void)
{
	std::cout << this->name << "\t" << "(" << this->type << ")" << "\t" <<
	"Braiiiiiiinnnssss" << std::endl;
}

void 	Zombie::announce(void)
{
	std::cout << this->name << "\t" << "(" << this->type << ")" << "\t" <<
	"Braiiiiiiinnnssss" << std::endl;
}
