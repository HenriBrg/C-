/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 23:15:24 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 01:33:30 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

void 	ZombieEvent::setZombieType(std::string const &type)
{
	this->type = type;
}

Zombie 	*ZombieEvent::newZombie(std::string const &name)
{
	Zombie *zombie;

	zombie = new Zombie(this->type, name);
	return (zombie);
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *zombie;
	std::string names[10] = { "AAA", "BBB", "CCC", "DDD", "EEE",
							  "FFF", "GGG", "HHH", "III", "JJJ"};

	zombie = new Zombie(this->type, names[rand() % 10]);
	zombie->announce();
	return (zombie);
}
