/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:56:39 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:23:58 by henri            ###   ########.fr       */
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
** leaks a.out to check if pony is deleted
*/

int main(void)
{
	std::cout << "Heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Heap Done" << std::endl;
	std::cout << std::endl << "Stack" << std::endl;
	ponyOnTheStack();
	std::cout << "Stack Done" << std::endl;
	return (0);
}
