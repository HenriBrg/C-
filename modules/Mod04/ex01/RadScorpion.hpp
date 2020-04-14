/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:37:33 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 19:46:23 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion & source);
		virtual ~RadScorpion ();
		RadScorpion &operator=(const RadScorpion & source);

		using Enemy::takeDamage;

	protected:
	private:
};

# endif
