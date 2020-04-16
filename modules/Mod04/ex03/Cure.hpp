/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 22:06:37 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 00:13:29 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure & source);
		virtual ~Cure ();
		Cure &operator=(const Cure & source);
		AMateria* clone() const;
		void use(ICharacter& target);
	protected:
	private:
};

# endif
