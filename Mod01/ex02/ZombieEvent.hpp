/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 22:41:40 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:35:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include <string>
# include <random>
# include <chrono>
# include <thread>
# include "Zombie.hpp"

class ZombieEvent {

	public:
		void 	setZombieType(std::string const & type);
		Zombie 	*newZombie(std::string name);
		Zombie	*randomChump(void);

	private:
		std::string	type;
};

#endif
