/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 23:47:10 by henri             #+#    #+#             */
/*   Updated: 2020/04/07 00:22:22 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	/* Constructor */
}
Cat::~Cat()
{
	/* Destructor */
}

void	Cat::readOneFile(std::istream &stream)
{
	std::string line;

	while (std::getline(stream, line))
	{
		std::cout << line;
		if (stream.eof() == 0)
			std::cout << std::endl;
	}
	if (stream.bad())
		throw "Bad Stream";
}


void	Cat::openRead(const std::string &fileName)
{
	std::fstream targetFile(fileName);

	if (targetFile.is_open() == 0 || targetFile.good() == 0)
		std::cerr << "cato9tails: " << fileName  << ": " << std::strerror(errno) << std::endl;
	else
	{
		try {
			Cat::readOneFile(targetFile);
		} catch (const char *error) {
			std::cerr << "cato9tails: " << fileName  << ": " << error << std::endl;
		}
		targetFile.close();
	}
}
