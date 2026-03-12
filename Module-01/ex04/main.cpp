/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:56:59 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 13:45:32 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> 

int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "Args must be: <filename> <s1> <s2>\n";
		return 1;
	}
	std::string fileName = av[1];
	std::string find = av[2];
	std::string replace = av[3];
	size_t i = 0;
	if(find.empty())
		return 1;
	
	std::ifstream inputFile(fileName.c_str()); //c_str() formats File because ifstream needs a const char*, not an std::str
	if(!inputFile)
	{
		std::cout << "Error: cannot open input file.\n";
		return 1;
	}
	std::ofstream copiedFile((fileName + ".replace").c_str());
	std::string line;
	while(std::getline(inputFile, line))
	{
		i = 0;
		while((i = line.find(find,i)) != std::string::npos)
		{
			line.erase(i,find.length());
			line.insert(i,replace);
		}
		copiedFile << line;
	}
	return 0;
}