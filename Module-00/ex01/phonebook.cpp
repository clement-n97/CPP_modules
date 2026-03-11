/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 09:47:56 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/01 09:48:51 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

void PhoneBook::addContact(){
	std::string fn, ln, nn, pn, ds;

	std::cout << "First name: ";
	std::getline(std::cin, fn);
	std::cout << "Last name: ";
	std::getline(std::cin, ln);
	std::cout << "Nickname: ";
	std::getline(std::cin, nn);
	std::cout << "Phone number: ";
	std::getline(std::cin, pn);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, ds);

	if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
	{
		std::cout << "Fields cannot be empty\n";
		return;
	}
	else
		std::cout << "Contact succesfully added to the phonebook.\n";
	contact[index].setContacts(fn,ln,nn,pn,ds);
	index = (index + 1) % 8;
	if (count < 8)
		count++;
}


static std::string format(const std::string &str)
{
	if(str.length() > 10)
		return(str.substr(0,9) + ".");
	else
		return str;
}

void PhoneBook::displayContact() const{
	int i = 0;
	if(count == 0)
	{
		std::cout << "Phonebook is empty.\n";
		return;
	}
	while(i < count)
	{
		std::cout << std::right
					<< std::setw(10) << i << "|"
					<< std::setw(10) << format(contact[i].getFirstName()) << "|"
					<< std::setw(10) << format(contact[i].getLastName()) << "|"
					<< std::setw(10) << format(contact[i].getNickName()) << "\n";
		i++;
	}
	searchContact();
}

void PhoneBook::searchContact() const{
	std::string str;
	int index;
	std::cout << "Enter entry index to display:\n";
	std::getline(std::cin, str);
	std::istringstream iss(str);
	if (!(iss >> index))
	{
		std::cout << "Index out of range.\n";
		return;
	}
	if (index < 0 || index >= count)
	{
		std::cout << "Index out of range.\n";
		return;
	}
	std::cout << "First name: " << contact[index].getFirstName() << "\n";
	std::cout << "Last name: " << contact[index].getLastName() << "\n";
	std::cout << "Nickname: " << contact[index].getNickName() << "\n";
	std::cout << "Phone number: " << contact[index].getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << contact[index].getDarkestSecret() << "\n";
}
