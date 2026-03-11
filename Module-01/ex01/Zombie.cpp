/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:14:37 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/11 17:38:30 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name){
	this->name = name;
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(){
	std::cout << name <<": has been destroyed\n";
}

void Zombie::setName(std::string name){
	this->name = name;
}