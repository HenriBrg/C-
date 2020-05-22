/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:48:34 by henri             #+#    #+#             */
/*   Updated: 2020/04/07 00:22:01 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <fstream>
# include <string>

class Cat {
	public:
		Cat();
		~Cat();
		static void	readOneFile(std::istream &stream);
		static void	openRead(const std::string &fileName);
};

#endif
