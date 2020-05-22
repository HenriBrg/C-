/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:25:52 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 15:46:37 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Victim.hpp"

Victim::Victim(std::string const & name): name(name) {
	std::cout << "Some random victim called " << this->name << " just appeared !"  << std::endl;
}

Victim::Victim(Victim const & source): name(source.name) {
	std::cout << "Some random victim called " << this->name << " just appeared !"  << std::endl;
}

Victim::~Victim() {
	std::cout << "The victim " << this->name << " died for no apparent reasons !" << std::endl;
}

Victim & Victim::operator=(Victim const & source) {
	this->name = source.name;
	return (*this);
}

std::string const &Victim::getName(void) const
{
	return (this->name);
}

std::ostream &operator<<(std::ostream &out, Victim const & victim)
{
	out << "I'm " << victim.getName() << " and I like otters !" << std::endl;
	return (out);
}

void Victim::getPolymorphed(void) const {
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}
