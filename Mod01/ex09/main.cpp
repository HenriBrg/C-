/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:44:57 by henri             #+#    #+#             */
/*   Updated: 2020/04/06 23:23:42 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Logger.hpp"

int main(void)
{
	Logger logger("log");

	try {
		logger.log("console", "First Log");
		logger.log("file", "Second Log");
		logger.log("console", "Third Log");
		logger.log("file", "Fourth Log");
		logger.log("console", "Fith Log");
	} catch (const char *error) {
		std::cerr << "Error : " << error << std::endl;
		return (1);
	}
	return (0);
}
