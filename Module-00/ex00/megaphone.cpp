/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 09:30:45 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/01 09:30:46 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	if(ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return 0;
	}
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			std::cout << char(toupper(av[i][j]));
			j++;
		}
		i++;
	}
	std::cout << "\n";
	return 0;
}