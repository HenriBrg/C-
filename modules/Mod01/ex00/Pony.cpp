/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:58:50 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 21:55:10 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

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
