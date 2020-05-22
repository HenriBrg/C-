/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:58:58 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 21:56:15 by henri            ###   ########.fr       */
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

	/*
	** Pas réussi à mettre le constructeur dans le fichier .cpp
	** car age/size étaient considérées comme inutilisées
	*/

	Pony(int a, int s) {
		age = a;
		size = s;
		std::cout << "Constructor" << std::endl;
	};
	~Pony();
	void run();
	void eat();

};

#endif
