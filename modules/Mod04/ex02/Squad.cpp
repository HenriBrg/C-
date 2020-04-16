/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 21:41:42 by henri             #+#    #+#             */
/*   Updated: 2020/04/15 18:17:47 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"

Squad::Squad(): count(0), units(NULL) {
}

/* L’assignation par copie d’une Squad doit impliquer une deep copy.
Si il y avait une unité dans l’escouade avant, elle doit être détruite avant d’être remplacée.
Chaque unité sera créée avec new() */

Squad::Squad(Squad const & source): count(0), units(NULL) {
	this->count = 0;
	for (int i = 0; i < source.getCount(); i++)
		this->push(source.getUnit(i)->clone());
}

Squad::~Squad() {
	if (this->units == 0)
		return ;
	for (int i = 0; i < this->count; i++)
		delete this->units[i];
	delete this->units;
}

Squad & Squad::operator=(Squad const & source) {
	if (this->units) {
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = NULL;
	}
	this->count = 0;
	for (int i = 0; i < source.getCount(); i++)
		this->push(source.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const {
	return (this->count);
}

ISpaceMarine *Squad::getUnit(int index) const {
	// Différence entre count et this->count ?
	if (index < 0 || index >= count || this->count == 0)
		return (NULL);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit) {
	if (unit == 0)
		return (this->count);
	if (this->units == 0) {
		/* L'étoile * en plus permet de dire qu'on veut un pointeur sur un tableau de classes dérivées
		qu'on stockera dans ISpaceMarine **units
		Si ça n'était pas une classe dérivée, on aurait pu juste faire new ISpaceMarine[1]
		http://www.cplusplus.com/forum/general/20044/#msg104472 */
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	} else {
		/* On check si le pointeur n'existe pas déja */
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		/* On re-alloc de + 1 pour le nouvel entrant */
		ISpaceMarine **tab = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			tab[i] = this->units[i];
		delete[] this->units;
		this->units = tab;
		this->units[this->count] = unit;
		this->count += 1;
	}
	return (this->count);
}
