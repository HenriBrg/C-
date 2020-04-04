/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 14:57:59 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 16:22:59 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde {

	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void 	announce(void);

	private:
		int	size;
		Zombie	*horde;
};

#endif
