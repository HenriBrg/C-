/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 22:12:11 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 16:51:35 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <random>
# include <time.h>

class Zombie {

	public:
		void 				announce(void);
		std::string			randomChump(void);
		void 				makeAlive(std::string const type, std::string const name);

	private:
		std::string type;
		std::string name;
};

#endif
