/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:34:36 by henri             #+#    #+#             */
/*   Updated: 2020/04/10 23:40:57 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <string>

class ScavTrap {

	public:
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & obj);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const & obj);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void challengeNewcomer(void);

	private:
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

#endif
