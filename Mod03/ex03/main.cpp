/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/11 19:36:59 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main() {

	srand(time(NULL));

	ClapTrap clap("Pierre the ClapTrap");
	FragTrap frag("Jack");
	ScavTrap *scav = new ScavTrap("Jhon");
	NinjaTrap *ninja = new NinjaTrap("Jackie the Ninja");

	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("Paul");
	ninja->rangedAttack("Jacques");
	ninja->beRepaired(10);
	ninja->takeDamage(40);
	ninja->takeDamage(20);
	ninja->takeDamage(30);
	ninja->takeDamage(5);
	ninja->beRepaired(10);
	ninja->ninjaShoebox(frag);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*ninja);
	delete scav;
	delete ninja;
	return (0);
}
