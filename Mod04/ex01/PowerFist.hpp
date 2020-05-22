/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:57:33 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 18:12:48 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist & source);
		virtual ~PowerFist ();
		PowerFist &operator=(const PowerFist & source);
		void attack(void) const;
	protected:
	private:
};

# endif
