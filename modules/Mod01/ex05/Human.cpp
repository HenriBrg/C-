/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:56:32 by henri             #+#    #+#             */
/*   Updated: 2020/04/04 22:17:38 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Brain &Human::getBrain(void) {
	return (this->brain);
}

std::string Human::identify(void) {
	return (this->brain.identify());
}
