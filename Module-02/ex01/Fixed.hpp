/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:05:03 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/20 14:22:29 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class fixedPoint{
	private:
		int value;
		static const int bits = 8;
	public:
		fixedPoint();
		fixedPoint(const int);
		fixedPoint(const float);
		fixedPoint(const fixedPoint& copy);
		~fixedPoint();
		fixedPoint& operator=(const fixedPoint& copy);

		float toFloat(void) const;
		int toInt(void);
		
		const int& getRawBits() const;
		void setRawBits(int const raw);
};

#endif