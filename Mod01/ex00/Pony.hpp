/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:58:58 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:13:35 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony {

private:

	int age;
	int size;

public:

	Pony(int a, int s);
	~Pony();
	void run();
	void eat();

};

#endif
