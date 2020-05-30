/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 00:24:44 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 16:23:00 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(std::string const &name): name(name), countMateria(0) {
	for (int i = 0; i < 4; i++) {
		this->inv[i] = NULL;
	}
}

Character::Character(Character const & source): name(source.name), countMateria(0) {
	for (int i = 0; i < source.countMateria; i++) {
		this->equip(source.inv[i]->clone());
	}
}

Character::~Character() {
	for (int i = 0; i < this->countMateria; i++)
		delete this->inv[i];
}

Character & Character::operator=(Character const & source) {
	this->name = source.name;
	for (int i = 0; i < this->countMateria; i++) {
		delete this->inv[i];
	}
	this->countMateria = 0;
	for (int i = 0; i < source.countMateria; i++) {
		this->equip(source.inv[i]->clone());
	}
	return (*this);
}

std::string const &Character::getName(void) const {
	return (this->name);
}

void Character::equip(AMateria *m) {
	if (this->countMateria == 4 || m == 0)
		return ;
	for (int i = 0; i < this->countMateria; i++) {
		if (this->inv[i] == m)
			return ;
	}
	this->inv[this->countMateria] = m;
	this->countMateria++;
}
void Character::unequip(int idx) {
	if (idx < 0 || this->countMateria <= idx || this->inv[idx] == NULL)
		return ;
	this->countMateria -= 1;
	for (int i = idx; i < 3; i++) {
		this->inv[i] = this->inv[i + 1];
		this->inv[i + 1] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || this->countMateria <= idx || this->inv[idx] == NULL)
		return ;
	this->inv[idx]->use(target);
}
