/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 17:03:33 by henri             #+#    #+#             */
/*   Updated: 2020/04/15 18:00:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & source) {
	(void)source;
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout <<  "Aaargh ..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & source) {
	(void)source;
	return (*this);
}

ISpaceMarine *TacticalMarine::clone(void) const {
	TacticalMarine *dup = new TacticalMarine(*this);
	return (dup);
}

void TacticalMarine::battleCry(void) const {
	std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}
