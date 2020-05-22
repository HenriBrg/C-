/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 18:55:03 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 15:43:18 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(const Sorcerer & source);
		virtual ~Sorcerer();
		Sorcerer &operator=(const Sorcerer & source);
		std::string const & getName(void) const;
		std::string const & getTitle(void) const;
		void polymorph(Victim const &victim) const;
	protected:
	private:
		std::string name;
		std::string title;
		Sorcerer(); /* We dont want to build a Sorcerer without args */
};

std::ostream &operator<<(std::ostream & out, Sorcerer const & s);

# endif
