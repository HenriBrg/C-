/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 16:53:25 by henri             #+#    #+#             */
/*   Updated: 2020/04/15 18:42:10 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl << "More tests" << std::endl << std::endl;

	ISquad *sq = new Squad;
	std::cout << "getCount() return " << sq->getCount() << std::endl;
	std::cout << "Try to push null pointer" << std::endl;

	sq->push(0);
	sq->push(new AssaultTerminator);
	std::cout << sq->getCount() << std::endl;
	for (int i = 0; i < sq->getCount(); i++) {
		sq->getUnit(i)->battleCry();
		sq->getUnit(i)->clone()->battleCry();
	}
	std::cout << "Trying to get an unit which doesn't exist : address = " << sq->getUnit(100) << std::endl;
	std::cout << "Trying to get an unit which doesn't exist : address = " << sq->getUnit(-100) << std::endl;
	return 0;
}
