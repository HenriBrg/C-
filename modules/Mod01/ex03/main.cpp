/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 00:55:42 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 16:39:14 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

# define N 5

/*
** cpw main.cpp ZombieHorde.cpp Zombie.cpp && ./a.out
*/

int				main(void)
{
	std::cout << "Horde Creation\n\n";
	ZombieHorde horde(N);
	horde.announce();
	std::cout << "\nZombies Deletion\n";
	return (0);
}
