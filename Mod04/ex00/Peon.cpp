/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:57:59 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 16:11:06 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Peon.hpp"

Peon::Peon(Peon const & source): Victim(source.name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & source) {
	this->name = source.name;
	return (*this);
}

Peon::Peon(std::string const &name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
