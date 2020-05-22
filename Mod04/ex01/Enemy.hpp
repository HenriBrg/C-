/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:31:13 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 18:48:20 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	public:
		Enemy();
		Enemy(const Enemy & source);
		Enemy(int hp, std::string const & type);
		virtual ~Enemy ();
		Enemy &operator=(const Enemy & source);
		std::string const getType() const;
		int getHP() const;
		 virtual void takeDamage(int);
	protected:
		std::string type;
		int hp;
	private:
};

# endif
