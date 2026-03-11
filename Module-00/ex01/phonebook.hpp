#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contacts.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class PhoneBook{
	private:
		Contacts contact[8];
		int index;
		int count;

	public:
		PhoneBook();
		void addContact();
		void searchContact() const;
		void displayContact() const;
};

#endif