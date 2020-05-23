/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:03:53 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:48:20 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): size(n) {
	if (size <= 0)
		std::cout << "Error: size = 0" << std::endl;
	else
	{
		this->horde = new Zombie[n];
		// https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
		srand((unsigned)time(NULL));
		// srand needed each time we call rand() because, else rand() would always
		// return the same value - Try without if needed
		for (int i = 0; i < n; i++)
			this->horde[i].makeAlive("Human", this->horde[i].randomChump());
	}
}

void 	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->size; i++) {
		this->horde[i].announce();
	}
}

ZombieHorde::~ZombieHorde() {
	delete[] this->horde;
}
