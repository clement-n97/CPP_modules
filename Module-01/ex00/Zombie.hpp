/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:36:12 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/11 16:55:25 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif