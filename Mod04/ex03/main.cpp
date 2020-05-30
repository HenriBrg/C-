/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 00:05:56 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 16:24:03 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main() {

	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;
	delete src;


	std::cout << "Main de test" << std::endl;

	ICharacter *jack = new Character("jack");
	ICharacter *Igor = new Character("Igor");

	std::cout << "Hello, my name is " << jack->getName() << std::endl;
	IMateriaSource* matTemplate = new MateriaSource();
	src->learnMateria(new Ice());
	AMateria* randomMateria;
	randomMateria = matTemplate->createMateria("ice");
	jack->equip(randomMateria);
	src->learnMateria(new Cure());
	AMateria* otherRndomMateria;
	otherRndomMateria = matTemplate->createMateria("cure");
	jack->equip(otherRndomMateria);

	jack->use(0, *Igor);
	jack->use(1, *Igor);

	jack->use(1, *Igor);
	std::cout << "materia exp: " << otherRndomMateria->getXP() << std::endl;
	std::cout << "materia exp: " << randomMateria->getXP() << std::endl;
	return 0;
}
