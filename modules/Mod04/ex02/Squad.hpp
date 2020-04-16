/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 21:41:42 by henri             #+#    #+#             */
/*   Updated: 2020/04/15 16:54:55 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		Squad(const Squad & source);
		virtual ~Squad ();
		Squad &operator=(const Squad & source);

		int getCount(void) const;
		ISpaceMarine *getUnit(int index) const;
		int push(ISpaceMarine *unit);

	protected:
	private:
		int count;
		ISpaceMarine **units;
};

# endif
