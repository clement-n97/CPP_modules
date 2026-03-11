/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:14:38 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/11 17:34:36 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void setName(std::string name);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif