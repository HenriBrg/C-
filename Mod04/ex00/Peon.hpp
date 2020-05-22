/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:57:59 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 16:10:28 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(const Peon & source);
		virtual ~Peon();
		Peon &operator=(const Peon & source);
		Peon(std::string const &name);
		void getPolymorphed(void) const;
	protected:
		Peon ();
	private:
};

# endif
