/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/05/26 23:07:37 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int	main() {
	FragTrap robot("FR4G-TP");

	srand(time(NULL)); /* Nécessaire pour reset l'appel de fonction rand() */
	robot.meleeAttack("Dockett");
	robot.rangedAttack("Dockett");
	robot.takeDamage(20);
	robot.beRepaired(5);
	robot.takeDamage(10);
	robot.takeDamage(5);
	robot.rangedAttack("Dockett");
	robot.beRepaired(15);
	robot.vaulthunter_dot_exe("Dockett");
	robot.vaulthunter_dot_exe("Dockett");
	robot.vaulthunter_dot_exe("Dockett");
	robot.vaulthunter_dot_exe("Dockett");
	robot.vaulthunter_dot_exe("Dockett");
	return (0);
}
