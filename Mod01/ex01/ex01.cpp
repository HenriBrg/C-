/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 22:03:48 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:32:13 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

/*
** Add the main
** 
** clang++ -Wall -Wextra -Werror ex01.cpp && ./a.out
**
** int main(void)
** {
** 		memoryLeak();
** }
*/

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
