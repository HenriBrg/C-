/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 17:00:10 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 19:39:30 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(void)
{
	std::string	*ptr;
	std::string source("HI THIS IS BRAIN");
	/*
	** References must be initialised in the same time of declaration
	*/
	std::string	&ref = source;
	ptr = &source;

	std::cout << "Pointeur  : " <<  *ptr << std::endl;
	std::cout << "Reference : " <<  ref << std::endl;

	return (0);
}
