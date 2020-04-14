/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:47:21 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 20:05:22 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(): name(std::string()), ap(0), weapon(NULL) {
}

Character::Character(std::string const &name): name(name), ap(40), weapon(NULL) {
}

Character::Character(Character const &source): name(source.name), ap(source.ap), weapon(source.weapon) {
}

Character::~Character() {
}

Character &Character::operator=(Character const &source) {
	this->name = source.name;
	this->ap = source.ap;
	this->weapon = source.weapon;
	return (*this);
}

std::string const &Character::getName(void) const {
	return (this->name);
}

int Character::getAP(void) const {
	return (this->ap);
}

AWeapon *Character::getWeapon(void) const {
	return (this->weapon);
}

void Character::recoverAP(void) {
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *weapon) {
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (!this->weapon || !enemy)
		return ;
	if (this->ap < this->weapon->getAPCost())
		return ;
	this->ap -= this->weapon->getAPCost();
	std::cout << this->name << " attaque " << enemy->getType()
			<< " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::ostream &operator<<(std::ostream &out, Character const &character) {
	out << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon())
		out << "carries a " << character.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}
