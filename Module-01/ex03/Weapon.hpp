/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:16:57 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 10:02:18 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string type_set);
};

#endif