/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:03:11 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 19:04:54 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(): countMateriaTemplate(0) {
	for (int i = 0; i < 4; i++)
		this->backup[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & source): countMateriaTemplate(0) {
	for (int i = 0; i < source.countMateriaTemplate; i++)
		this->learnMateria(source.backup[i]->clone());
	// Reset ?
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->countMateriaTemplate; i++)
		delete this->backup[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & source) {
	for (int i = 0; i < this->countMateriaTemplate; i++)
		delete this->backup[i];
	for (int i = 0; i < source.countMateriaTemplate; i++)
		this->learnMateria(source.backup[i]->clone());
	this->countMateriaTemplate = 0;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->countMateriaTemplate == 4 || m == NULL)
		return ;
	for (int i = 0; i < this->countMateriaTemplate; i++)
		if (this->backup[i] == m)
			return ;
	this->backup[this->countMateriaTemplate] = m;
	this->countMateriaTemplate += 1;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->countMateriaTemplate; i++)
		if (this->backup[i]->getType() == type)
			return (this->backup[i]->clone());
	return (NULL);
}
