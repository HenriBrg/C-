/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:44:01 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 15:51:50 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Character.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

int main() {
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	std::cout << std::endl << "My tests" << std::endl << std::endl << std::endl;

	Character jack("jack");
	Enemy* s = new SuperMutant();
	jack.attack(s);
	jack.equip(pf);

	SuperMutant mutant;
	std::cout << mutant.getType() << std::endl;
	RadScorpion scorpion;
	std::cout << scorpion.getType() << std::endl;
	std::cout << jack << std::endl;

	delete moi;
	delete b;
	delete pr;
	delete pf;
	return 0;
}
