/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 18:02:39 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 16:15:45 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AssaultTerminator.hpp"

# include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & source) {
	(void)source;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout <<  "I’ll be back ..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & source) {
	(void)source;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone(void) const {
	AssaultTerminator *dup = new AssaultTerminator(*this);
	return (dup);
}

void AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attaque with chainfists *" << std::endl;
}
