/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/11 17:46:24 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	srand(time(NULL));
	FragTrap frag("Jack");

	frag.vaulthunter_dot_exe("PAUL");
	frag.meleeAttack("PAUL");
	frag.rangedAttack("PAUL");
	frag.takeDamage(44);
	frag.beRepaired(90); // Notice that the parent method is called
	frag.takeDamage(80);
	frag.takeDamage(7);
	frag.beRepaired(40);
	frag.vaulthunter_dot_exe("CL4P-TP");

	std::cout << std::endl << "Testint Scav now " << std::endl << std::endl;

	ScavTrap *scav = new ScavTrap("Jhon");
	scav->challengeNewcomer();
	scav->meleeAttack("PIERRE");
	scav->rangedAttack("PIERRE");
	scav->takeDamage(15);
	scav->beRepaired(30);
	scav->takeDamage(10);
	scav->takeDamage(12);
	scav->beRepaired(70);
	scav->challengeNewcomer();
	delete scav;

	return (0);
}
