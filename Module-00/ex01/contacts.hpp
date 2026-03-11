#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>

class Contacts{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setContacts(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};


#endif