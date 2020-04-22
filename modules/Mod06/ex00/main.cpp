/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 23:01:05 by henri             #+#    #+#             */
/*   Updated: 2020/04/22 15:34:30 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <sstream>
# include <typeinfo>
# include <climits>
# include <cfloat>
# include <math.h>
# include <iomanip>

int main(int ac, char const **av) {

	bool isInf = false;

	if (ac != 2 && (std::cout << "Usage : ./convert [number]" << std::endl))
		return (1);
	std::string s = *++av;
	for (size_t i = 0; i < s.length(); i++)
		s[i] = std::tolower(s[i]);

	if (s.compare(0, s.length(), "-inf") == 0 || s.compare(0, s.length(), "+inf") == 0 || s.compare(0, s.length(), "nan") == 0)
		isInf = true;
	if (s[s.length() - 1] == 'f')
		s = s.substr(0, s.length() - 1);

	long double 		n;
	std::istringstream	iss(s);
	iss >> n;

	//  CHAR
	if (isinf(n) || isnan(n) || n < CHAR_MIN || n > CHAR_MAX)
		std::cout << "char	: Impossible" << std::endl;
	else if (std::isprint(static_cast<char>(n)))
		std::cout << "char	: '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char	: Non Displayable" << std::endl;
	//  INT
	if (isinf(n) || isnan(n) || n < INT_MIN || n > INT_MAX)
		std::cout << "int	: Impossible" << std::endl;
	else
		std::cout << "int	: " << static_cast<int>(n) << std::endl;
	//  FLOAT
	if ((isinf(n) || isnan(n)) && (n < FLT_MIN || n > FLT_MAX))
			std::cout << "float	: Impossible" << std::endl;
	else
			std::cout << "float	: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
	// DOUBLE
	if ((isinf(n) || isnan(n)) && (n < DBL_MIN || n > DBL_MAX))
			std::cout << "double	: Impossible" << std::endl;
	else
			std::cout << "double	: " << std::setprecision(1) << std::fixed << static_cast<double>(n) << std::endl;

	return (0);
}
