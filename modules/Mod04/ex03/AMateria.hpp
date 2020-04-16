/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 18:42:55 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 18:37:14 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class AMateria; /* Need to be defined here, else : compilation errors */

# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int 		getXP() const; //Returns the Materia's XP
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
	protected:
		std::string _type;
		unsigned int _xp;
	private:
		AMateria();
};

# endif
