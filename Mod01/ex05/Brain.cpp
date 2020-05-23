/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:37:39 by henri             #+#    #+#             */
/*   Updated: 2020/05/23 15:55:40 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain() {
	this->neurones = 2;
}

std::string Brain::identify(void) {
	long address = (long)this;
	std::stringstream stringAddress;

	stringAddress << "0x" << std::uppercase << std::hex << address;
	return (stringAddress.str());

}
