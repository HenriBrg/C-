/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:44:57 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 18:57:34 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Logger.hpp"

// NON PUSHÉ lors de la validation car ex07 skippé

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
