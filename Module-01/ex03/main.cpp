/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:33:39 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 10:43:47 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		/*We cannot change the assigned weapon 
		since it's been assigned at construction by reference
		but we can change the weapon itself*/
		
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.Attack();
		club.setType("some other type of club");
		bob.Attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.Attack();
		club.setType("some other type of club");
		jim.Attack();
		
		/*We can also create another weapon and assign it
		instead of changing the weapon
		
		Weapon pistol("pistol");
		jim.setWeapon(pistol);
		jim.Attack();*/
	}
}