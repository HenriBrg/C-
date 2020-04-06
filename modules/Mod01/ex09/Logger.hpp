/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:48:34 by henri             #+#    #+#             */
/*   Updated: 2020/04/06 23:26:49 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <string>
# include <sstream>
# include <chrono>

class Logger {
	public:
		Logger(const std::string &fileName);
		~Logger();
		void 		log(std::string const &dest, std::string const &message);
	private:
		std::ofstream	fileName;
		void		logToConsole(const std::string &s);
		void		logToFile(const std::string &s);
		std::string 		makeLogEntry(const std::string &brutLog); /* Ajoute la date du jour */
};

#endif
