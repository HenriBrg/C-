/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:31:13 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 15:34:10 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): type(type), hp(hp) {
	// std::cout << "Constructeur [int-string] de la classe Enemy" << std::endl;
}


Enemy::Enemy(Enemy const & source): type(source.type), hp(source.hp) {
	// std::cout << "Constructeur de copie de la classe Enemy" << std::endl;

}

Enemy::~Enemy() {
	// std::cout << "Destructeur de la classe Enemy" << std::endl;

}

Enemy & Enemy::operator=(Enemy const & source) {
	this->type = source.type;
	this->hp = source.hp;
	return (*this);
}

std::string const Enemy::getType() const {
	return (this->type);
}
int Enemy::getHP() const {
	return (this->hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0) {
		this->hp -= damage;
		if (this->hp < 0)
			this->hp = 0;
	}
}
