/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:36:05 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/11 17:04:08 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie z("Yves");
	Zombie* heap = newZombie("Heap");
	z.announce();
	heap->announce();
	randomChump("Chump");
	delete heap;
	return 0;
}