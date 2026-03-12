/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:17:29 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 10:35:38 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void Attack() const;
};