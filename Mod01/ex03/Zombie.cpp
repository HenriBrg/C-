/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 22:26:35 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 16:55:14 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

std::string Zombie::randomChump(void)
{
	std::string names[10] = { "AAA", "BBB", "CCC", "DDD", "EEE", "FFF", "GGG", "HHH", "III", "JJJ"};

	return (names[rand() % 10]);
}

void 	Zombie::announce(void)
{
	std::cout << this->name << "\t" << "(" << this->type << ")" << "\t" <<
	"Braiiiiiiinnnssss" << std::endl;
}

void 	Zombie::makeAlive(std::string const type, std::string const name)
{
	this->type = type;
	this->name = name;
}
