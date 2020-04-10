/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 23:36:32 by henri             #+#    #+#             */
/*   Updated: 2020/04/11 00:12:29 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# include <iostream>
# include <string>

class ClapTrap {
	public:
		/* Les fonctions virtual sont destinées à être redéfinies dans les classes qui
		sont héritières de celle-ci
		C'est facultatif, sauf si la fonction virtual est PURE, elle devra être redéfinie dans les classes héritières */
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &obj);
		virtual ~ClapTrap();
		ClapTrap &operator=(ClapTrap const &obj);
		virtual void rangedAttack(std::string const & target);
		virtual void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		ClapTrap();
		void copy(ClapTrap const &other);
		unsigned int	level;
		int				hitPoints;
		int				maxHitPoints;
		int				energyPoints;
		int				maxEnergyPoints;
		unsigned int	meleeAttackDmg;
		unsigned int	rangeAttackDmg;
		int				armorDmgReduction;
		std::string		name;
};
