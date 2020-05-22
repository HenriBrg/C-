/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:29:31 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 17:56:51 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(const AWeapon & source);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon ();
		AWeapon &operator=(const AWeapon & source);
		std::string const & getName() const;
		int getAPCost() const;
		int getDamage() const;
		/* Fonction virtuelle pure */
		virtual void attack() const = 0;
	protected:
		std::string name;
		int degats;
		int manaCost;
	private:
};

# endif
