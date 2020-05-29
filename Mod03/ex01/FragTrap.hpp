/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:34:36 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:10:33 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <string>

class FragTrap {

	public:
		FragTrap();
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & obj);
		~FragTrap();
		FragTrap &operator=(FragTrap const & obj);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

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
