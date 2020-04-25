/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 15:18:32 by henri             #+#    #+#             */
/*   Updated: 2020/04/25 23:18:42 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>

template <typename T>
int easyfind(T & o, int i) {
	/* http://www.cplusplus.com/reference/algorithm/find/ */
	typename T::iterator it = std::find(o.begin(), o.end(), i);
	if (it == o.end())
		throw std::exception();
	return *it;
}

template<typename T>
typename T::iterator easyfindBis(T &container, int value) {
	return (std::find(container.begin(), container.end(), value));
}

# endif
