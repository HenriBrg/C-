/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 19:39:28 by henri             #+#    #+#             */
/*   Updated: 2020/04/23 00:07:46 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

/* Theorie well explained : https://www.youtube.com/watch?v=uS37TujnLRw */

struct Data {
	std::string		s1;
	int				n;
	std::string		s2;
};

void *serialize(void) {

	char  *raw = new char[20]; /* 16 bytes for 16 chars + 4 bytes for 1 int */
	char  alphaNum[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	std::srand(time(0));
	for (int i = 0; i < 8; i++)
		raw[i] = alphaNum[rand() % 62]; /* alplaNum length */
	*reinterpret_cast<int*>(raw + 8) = rand() % 1000000;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = alphaNum[rand() % 62]; /* alplaNum length */
	return (static_cast<void*>(raw)); /* Idem que (void*) ou même idem que rien car cast implicite via prototype */
}

Data * deserialize(void * raw) {
	Data *d = new Data();

	char *str = reinterpret_cast<char*>(raw);
	d->n  = *reinterpret_cast<int*>(str + 8); /* char * vers int * car on doit rester entre pointeur */
	d->s1 = std::string(str, 8);
	d->s2 = std::string(str + 12, 8);
	return (d);
}

int main() {
	void *raw;
	if ((raw = serialize()) == 0)
		return 1;

	Data *d = deserialize(raw);

	std::cout << "S1	= " << d->s1 << std::endl;
	std::cout << "N 	= " << d->n  << std::endl;
	std::cout << "S2	= " << d->s2 << std::endl;

	delete d;

	/* Hexadecimal view of raw */
	// unsigned char *str = reinterpret_cast<unsigned char *>(raw);
	// std::cout << "Raw bytes : ";
	// for (size_t i = 0; i < 20; i++)
	// 	std::cout << std::hex << std::showbase << +str[i] << " ";
	// std::cout << std::endl;
	// delete str;

	return 0;
}
