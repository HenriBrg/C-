/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:56:39 by henri             #+#    #+#             */
/*   Updated: 2020/04/03 21:57:15 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony stack(3, 33);

	stack.eat();
	stack.run();
}

void 	ponyOnTheHeap()
{
	Pony *heap;

	heap = new Pony(7, 77);
	heap->eat();
	heap->run();
	delete heap;
}

/*
** clang++ -Wall -Wextra -Werror main.cpp Pony.cpp && ./a.out
*/

int main(void)
{
	std::cout << "Heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Heap Done" << std::endl;
	std::cout << std::endl << "Stack" << std::endl;
	ponyOnTheStack();
	std::cout << "Stack Done" << std::endl;
	while (1);
	return (0);
}
