/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:05:05 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/20 14:24:12 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

fixedPoint::fixedPoint(){
	value = 0;
	std::cout << "Default constructor called\n";
}

fixedPoint::fixedPoint(const int nb){
	std::cout << "Int constructor called\n";
	value = nb << bits; //bit shit of 8 towards left 00000101 << 8  →  00000101 00000000
}

fixedPoint::fixedPoint(const float nb){
	std::cout << "Float constructor called\n";
	value = roundf(nb * (1 << bits)); //roundf rounds to closest int
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

float fixedPoint::toFloat(void) const{

}

float fixedPoint::toInt(void) const{
	
}


const int& fixedPoint::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return value;
}

void fixedPoint::setRawBits(int const raw){
	value = raw;
}
