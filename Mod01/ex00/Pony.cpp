/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:58:50 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:21:53 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int a, int s) {
	age = a;
	size = s;
	std::cout << "Constructor" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destructor" << std::endl;
}

void Pony::run(void)
{
	std::cout << "I AM RUNNING" << std::endl;
}

void Pony::eat(void)
{
	std::cout << "I AM EATING" << std::endl;
}
