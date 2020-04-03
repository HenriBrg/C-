#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

	public:

	void 	newContact(int index);
	void 	showHeaderContact();
	void 	showFullContact();

	private:

	void 	showField(std::string field);

	int				index;
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
