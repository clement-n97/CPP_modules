#include "phonebook.hpp"

int main(){
	PhoneBook pb;
	std::string cmd;
	while(1)
	{
		std::cout << "ADD | SEARCH | EXIT :\n";
		std::getline(std::cin,cmd);
		if(cmd.compare("ADD") == 0)
		{
			std::cout << "Adding new contact...\n";
			pb.addContact();
		}
		else if(cmd.compare("SEARCH") == 0)
		{
			std::cout << "Searching contact...\n";
			pb.displayContact();
		}
		else if(cmd.compare("EXIT") == 0)
			return 0;
	}
	return 0;
}
