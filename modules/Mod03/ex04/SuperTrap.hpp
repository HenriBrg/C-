/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 21:32:01 by henri             #+#    #+#             */
/*   Updated: 2020/04/12 20:59:30 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NinjaTrap.hpp"

/* Héritage multiple : https://cpp.developpez.com/faq/cpp/?page=L-heritage#Qu-est-ce-que-l-heritage-virtuel-et-quelle-est-son-utilite */
/* Comme NinjaTrap et FragTrap héritent virtuellement de ClapTrap,
la classe ClapTrap (et tout ce qui va avec) n'est pas dupliquée dans SuperTrap */

class SuperTrap: public NinjaTrap, public FragTrap {
	public:
		SuperTrap(std::string const & name);
		SuperTrap(SuperTrap const & obj);
		virtual ~SuperTrap();
		SuperTrap &operator=(SuperTrap const & obj);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

	protected:
	private:
};

#endif
