/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/10 21:20:59 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int	main() {
	FragTrap robot("FR4G-TP");

	srand(time(NULL)); /* Nécessaire pour reset l'appel de fonction rand() */
	robot.meleeAttack("R2D2");
	robot.rangedAttack("R2D2");
	robot.takeDamage(20);
	robot.beRepaired(5);
	robot.takeDamage(10);
	robot.takeDamage(5);
	robot.rangedAttack("R2D2");
	robot.beRepaired(15);
	robot.vaulthunter_dot_exe("R2D2");
	robot.vaulthunter_dot_exe("R2D2");
	robot.vaulthunter_dot_exe("R2D2");
	robot.vaulthunter_dot_exe("R2D2");
	robot.vaulthunter_dot_exe("R2D2");
	return (0);
}
