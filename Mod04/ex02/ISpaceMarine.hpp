/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 21:53:38 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 16:00:28 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

/* https://docs.microsoft.com/fr-fr/cpp/cpp/abstract-classes-cpp?view=vs-2019
En programmation orientée objet (POO), une classe abstraite est une classe dont
l'implémentation n'est pas complète et qui n'est pas instanciable.
Elle sert de base à d'autres classes dérivées (héritées).
Vous pouvez utiliser des pointeurs et des références à des types de classe abstraite. */

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine *clone(void) const = 0;
		virtual void battleCry(void) const = 0;
		virtual void rangedAttack(void) const = 0;
		virtual void meleeAttack(void) const = 0;
};

#endif
