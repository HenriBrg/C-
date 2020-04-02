#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {

	public:

	void 	newContact(int index);

	private:

	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		login;
	std::string		postalAddress;
	std::string 	emailAddress;
	std::string 	phoneNumber;
	std::string 	birthDayDate;
	std::string		favoriteMeal;
	std::string 	underwearColor;
	std::string 	darkestSecret;
};

#endif
