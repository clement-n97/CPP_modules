/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:14:35 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/11 17:38:41 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 8;
	Zombie* horde = zombieHorde(n, "Tom");
	int i = 0;
	while(i < n)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
}