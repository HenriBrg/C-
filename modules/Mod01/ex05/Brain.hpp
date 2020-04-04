/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 20:14:17 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 22:19:26 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <string>
# include <sstream>
# include <iomanip>

class Brain {
	public:
		Brain();
		std::string identify();
	private:
		int neurones;
};

#endif
