/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 22:06:37 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 00:15:03 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice & source);
		virtual ~Ice ();
		Ice &operator=(const Ice & source);
		AMateria* 	clone() const;
		void 		use(ICharacter& target);
	protected:
	private:
};

# endif
