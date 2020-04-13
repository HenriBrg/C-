/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 18:55:03 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 00:29:12 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class Sorcerer
{
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(const Sorcerer & source);
		virtual ~Sorcerer();
		Sorcerer &operator=(const Sorcerer & source);
	protected:
	private:
		Sorcerer(); /* We dont want to build a Sorcerer without args */
};

# endif
