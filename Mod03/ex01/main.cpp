/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/10 22:17:40 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int	main() {
	FragTrap frag("Jack the Frag");

	srand(time(NULL)); /* Nécessaire pour reset l'appel de fonction rand() */
	frag.meleeAttack("R2D2");
	frag.rangedAttack("R2D2");
	frag.takeDamage(20);
	frag.beRepaired(5);
	frag.takeDamage(10);
	frag.takeDamage(5);
	frag.rangedAttack("R2D2");
	frag.beRepaired(15);
	frag.vaulthunter_dot_exe("R2D2");
	frag.vaulthunter_dot_exe("R2D2");
	frag.vaulthunter_dot_exe("R2D2");
	frag.vaulthunter_dot_exe("R2D2");
	frag.vaulthunter_dot_exe("R2D2");

	std::cout << std::endl << "ScavTrap" << std::endl << std::endl;

	ScavTrap scav("Harry the Scav");
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.meleeAttack("C3PO");
	scav.rangedAttack("C3PO");
	scav.beRepaired(5);
	scav.takeDamage(10);
	scav.takeDamage(5);
	scav.rangedAttack("R2D2");
	scav.beRepaired(15);
	return (0);
}
