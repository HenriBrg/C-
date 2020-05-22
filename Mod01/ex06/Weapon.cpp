/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 22:39:23 by henri             #+#    #+#             */
/*   Updated: 2020/04/05 00:56:05 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

/*
** 3 façons de passer un paramètre à une fonction :
** https://stackoverflow.com/questions/2627166/difference-between-const-reference-and-normal-parameter
** Sans ref : duplique (passe la valeur)
** Avec ref : passe la réféfence mais modifiable
** + const : passe la réféfence et non modifiable
*/

Weapon::Weapon(std::string const &type): type(type) {
	// Constructor
}

void	Weapon::setType(std::string const &type) {
	this->type = type;
}

/*
** CONST : https://stackoverflow.com/questions/2157458/using-const-in-classs-functions
**
** A const method can be called on a const object
** Une fonction qui finit par const fait que : writing inside of this function will generate a compiler error.
*/

std::string const &Weapon::getType(void) const {
	return (this->type);
}
