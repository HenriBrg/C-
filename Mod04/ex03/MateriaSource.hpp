/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:03:11 by henri             #+#    #+#             */
/*   Updated: 2020/04/16 18:33:00 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & source);
		virtual ~MateriaSource ();
		MateriaSource &operator=(const MateriaSource & source);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);

	protected:
	private:
		int			countMateriaTemplate;
		AMateria	*backup[4];
};

# endif
