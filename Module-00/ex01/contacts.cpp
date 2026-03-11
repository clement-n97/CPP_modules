#include "phonebook.hpp"

void Contacts::setContacts(std::string fn, std::string ln,std::string nn,std::string pn,std::string ds){
	firstName = fn;
	lastName = ln;
	nickName = nn;
	phoneNumber = pn;
	darkestSecret = ds;
}

//GETTERS 

std::string Contacts::getFirstName() const {return firstName;}
std::string Contacts::getLastName() const {return lastName;}
std::string Contacts::getNickName() const {return nickName;}
std::string Contacts::getPhoneNumber() const {return phoneNumber;}
std::string Contacts::getDarkestSecret() const {return darkestSecret;}