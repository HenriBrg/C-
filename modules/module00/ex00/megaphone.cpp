/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 12:24:00 by henri             #+#    #+#             */
/*   Updated: 2020/04/02 15:59:59 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(int ac, char **av)
{
	int i;
	int	j;
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; i++)
		{
			j = -1;
			str = av[i];
			while (str[++j] != 0)
				std::cout << (char)(toupper(str[j]));
			if (i + 1 != ac)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
    return (0);
}
