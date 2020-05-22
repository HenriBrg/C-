/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:30:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/11 23:47:12 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

int	main() {

	srand(time(NULL));

	ClapTrap clap("Pierre the ClapTrap");
	FragTrap frag("Jack");
	ScavTrap *scav = new ScavTrap("Jhon");
	NinjaTrap *ninja = new NinjaTrap("Jackie the Ninja");

	SuperTrap *super = new SuperTrap("Havane"); /* Montrer que le ClapTrap constructor n'est call qu'une fois */
	super->meleeAttack("Paul");
	super->rangedAttack("Paul");
	super->takeDamage(5);
	super->beRepaired(10);
	super->takeDamage(20);
	super->takeDamage(5);
	super->beRepaired(30);
	super->vaulthunter_dot_exe("Marc");
	super->vaulthunter_dot_exe("Aurèle");
	super->ninjaShoebox(clap);
	super->ninjaShoebox(frag);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*ninja);

	/* Seul moyen de choisir d'envoyer la partie castée (sur la hiérarchie d'héritage)
	à la fonction ninjaShoebox

	L’opérateur static_cast peut être utilisé pour des opérations telles que la
	conversion d’un pointeur vers une classe de base en pointeur vers une classe dérivée
	https://docs.microsoft.com/fr-fr/cpp/cpp/static-cast-operator?view=vs-2019
	*/
	super->ninjaShoebox(*static_cast<NinjaTrap*>(super));

	// super->ninjaShoebox(*static_cast<NinjaTrap*>(super));
	// super->ninjaShoebox(*static_cast<FragTrap*>(super));


	return (0);
}
