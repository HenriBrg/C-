/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 17:19:23 by henri             #+#    #+#             */
/*   Updated: 2020/04/07 18:31:47 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Logger.hpp"

Logger::Logger(const std::string &fileName) {
	/* http://www.cplusplus.com/reference/fstream/fstream/open/ */
	this->fileName.open(fileName, std::ios::app);
}

Logger::~Logger() {
	if (this->fileName.is_open())
		this->fileName.close();
}

std::string Logger::makeLogEntry(std::string const &brutLog)
{
	std::stringstream retString;
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	retString << std::setfill('0') << "[" << (utc_tm.tm_year + 1900) << "/"
			<< std::setw(2) << utc_tm.tm_mon << "/"
			<< std::setw(2) << utc_tm.tm_mday << "] ";
	retString << brutLog;
	return (retString.str());
}

void	Logger::logToConsole(const std::string &s)
{
	std::cout << this->makeLogEntry(s) << std::endl;
}

void	Logger::logToFile(const std::string &s)
{
	if (this->fileName.is_open() == 0)
		throw "Couldn't open Log File";
	fileName << this->makeLogEntry(s) << std::endl;
}

/* Fonction membre :
Syntaxe : Nom_de)classe::*Nom_de_fonction
Elle reçoit en réalité implicitement un argument
supplémentaire, une sorte de pointeur this sur l'objet qui appelle la fonction

Le meilleur : https://www.ibm.com/support/knowledgecenter/en/ssw_ibm_i_73/rzarg/cplr034.htm

Sans tableau : void (X::* ptfptr) (int) = &X::f;
*/

void	Logger::log(std::string const &dest, std::string const &message)
{
	int		index;
	void 	(Logger::* const actions[2])(std::string const &value) = {
			&Logger::logToConsole, &Logger::logToFile
	};
	/* On définit ici un tableau de pointeur sur fonction void * de type Logger sur 2 fonctions qui prennent
	chacune un std::string */
	if (dest == "console")
		index = 0;
	else if (dest == "file")
		index = 1;
	else
		throw "Unknow Actions";
	(this->*actions[index])(message);
}
