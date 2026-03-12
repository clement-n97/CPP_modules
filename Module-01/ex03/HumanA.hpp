/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:36:49 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 10:14:39 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		void Attack() const;
};