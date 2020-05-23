/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 00:55:42 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:45:30 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

# define N 3

// clang++ -Wall -Wextra -Werror main.cpp Zombie.cpp ZombieEvent.cpp && ./a.out

int				main(void)
{
	ZombieEvent	runner;
	ZombieEvent	crawler;
	Zombie 		*runnersZombies[N];
	Zombie 		*crawlerZombies[N];

	std::cout << "Create Types" << std::endl << std::endl;
	runner.setZombieType("Runner");
	crawler.setZombieType("Crawler");

	std::cout << "Create Zombies" << std::endl << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		runnersZombies[i] = runner.randomChump();
	}
	for (int i = 0; i < N; i++)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		crawlerZombies[i] = crawler.randomChump();
	}
	std::cout << std::endl << "Delete Zombies" << std::endl;
	for (int i = 0; i < N; i++)
		delete runnersZombies[i];
	for (int i = 0; i < N; i++)
		delete crawlerZombies[i];
	return (0);
}
