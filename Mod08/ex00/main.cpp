/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:51:40 by henri             #+#    #+#             */
/*   Updated: 2020/06/03 19:25:54 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <set>
# include <deque>

int main(void) {
	int	iTab[5] = {2, 3, 5, 7, 11};
	/* Ensemble ordonné et sans doublons d’éléments */
	std::set<int> sC (iTab, iTab + 5);
	for (int i = -1; i < (int)sC.size(); i++) {
		try {
			std::cout << easyfind(sC, i) << std::endl;
		} catch (std::exception & exc) {
			std::cout << "From T : Doesn't exist !" << std::endl;
		}
	}

	std::deque<int> dqC; /* deque Container */
	for (int i = 0; i < 5; i++)
		dqC.push_back(i);
	std::deque<int>::iterator dqCit = easyfindBis(dqC, 1); /* Retourne un iterateur cette fois-ci, c'est mieux */
	if (dqCit == dqC.end())
		std::cout << "From Deque : Doesn't exist ! " << std::endl;
	else
		std::cout << "From Deque : Value 1 Founded ! " << std::endl;

	/* Faisable avec vector, list, set, multiset, map, multimap, ... */
}
