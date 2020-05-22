/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:57:33 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 18:01:29 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle & source);
		virtual ~PlasmaRifle ();
		PlasmaRifle &operator=(const PlasmaRifle & source);
		void attack(void) const;
	protected:
	private:
};

# endif
