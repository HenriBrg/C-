/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:34:36 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:11:13 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & obj);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const & obj);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

		void challengeNewcomer(void);
	protected:

	private:
};

#endif
