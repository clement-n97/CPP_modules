/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:17:55 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 10:32:59 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::Attack() const {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " is unarmed" << "\n";
}
