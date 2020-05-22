/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:47:21 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 20:04:59 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
	Character(std::string const &name);
	Character(Character const &source);
	virtual ~Character();

	Character &operator=(Character const &source);

	void recoverAP(void);
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	std::string const & getName(void) const;
	int getAP(void) const;
	AWeapon *getWeapon(void) const;

private:
	Character();
	std::string name;
	int ap;
	AWeapon *weapon;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif
