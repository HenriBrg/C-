/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 16:11:50 by henri             #+#    #+#             */
/*   Updated: 2020/04/26 18:43:01 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

int main(void) {
	Span s(5);

	s.addNumber(-10);
	s.addNumber(12);
	s.addNumber(50);
	s.addNumber(75);
	s.addNumber(110);
	try {
		s.addNumber(60);
	} catch (std::exception exc) {
		std::cout << "Exception : You cannot add another number into that vector" << std::endl;
	}

	/* Mettre vec en public avant de tester cette boucle */
	// for (std::vector<int>::iterator it = s.vec.begin(); it != s.vec.end(); it++)
	// 	std::cout << *it << std::endl;
	std::cout << "Longest  = " << s.longestSpan() << std::endl;
	std::cout << "Shortest = " << s.shortestSpan() << std::endl;


	std::cout << std::endl << "Official Main" << std::endl << std::endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}
