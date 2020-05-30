/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 22:06:27 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 16:00:19 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

/* En programmation orientée objet (POO), une classe abstraite est une classe dont
l'implémentation n'est pas complète et qui n'est pas instanciable.
Elle sert de base à d'autres classes dérivées (héritées). */

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine *getUnit(int index) const = 0;
		virtual int push(ISpaceMarine *unit) = 0;
};

#endif
