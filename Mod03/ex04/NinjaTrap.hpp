/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 18:16:37 by henri             #+#    #+#             */
/*   Updated: 2020/05/29 16:15:24 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap {

public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & obj);
	NinjaTrap &operator=(NinjaTrap const & obj);
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);

protected:
private:
	/* All herited from ClapTrap */
};

#endif
