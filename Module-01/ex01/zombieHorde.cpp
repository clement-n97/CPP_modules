/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:14:39 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/11 17:30:40 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	int i = 0;
	Zombie* horde = new Zombie[N];
	while(i < N){
		horde[i].setName(name);
		i++;
	}
	return horde;
}
