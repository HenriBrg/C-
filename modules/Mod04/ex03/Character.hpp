/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 00:24:44 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 17:06:34 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character(std::string const &name);
		Character(const Character & source);
		virtual ~Character ();
		Character &operator=(const Character & source);
		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
	protected:
	private:
		Character();
		AMateria 		*inv[4];
		std::string 	name;
		int				countMateria;

};

# endif
