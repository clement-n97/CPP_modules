/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:05:05 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/20 13:59:32 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

fixedPoint::fixedPoint() : value(0){
	std::cout << "Default constructor called\n";
}

fixedPoint::fixedPoint(const fixedPoint& copy){
	*this = copy;
	std::cout << "Copy assignment operator called\n";
}

fixedPoint::~fixedPoint(){
	std::cout << "Destructor called\n";
}

fixedPoint& fixedPoint::operator=(const fixedPoint& copy){
	std::cout << "Copy assignment operator called\n";
	if(this != &copy)
		this->value = copy.value;
	return *this;
}

const int& fixedPoint::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return value;
}

void fixedPoint::setRawBits(int const raw){
	value = raw;
}
