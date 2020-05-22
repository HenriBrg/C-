/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 16:40:02 by henri             #+#    #+#             */
/*   Updated: 2020/04/23 23:39:50 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename It>
void iter(It *arr, size_t size, void (*f)(It const & item)) {
	for (size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}

template <typename It>
void functionPtr(It const & data) {
	std::cout << data << " ";
}

int main(void) {
	std::string strTab[3] = {"Hello", "C++", "Template"};
	double		dTab[3] = {10.5, 21, 42};
	bool		bTab[3] = {true, false, true};

	iter(strTab, 3, functionPtr);
	std::cout << std::endl;

	iter(dTab, 3, functionPtr);
	std::cout << std::endl;

	iter(bTab, 3, functionPtr);
	std::cout << std::endl;

	return 0;
}
