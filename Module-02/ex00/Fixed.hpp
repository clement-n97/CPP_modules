/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:05:03 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/20 13:50:40 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class fixedPoint{
	private:
		int value;
		static const int bits;
	public:
		fixedPoint();
		fixedPoint(const fixedPoint& copy);
		~fixedPoint();
		fixedPoint& operator=(const fixedPoint& copy);
		
		const int& getRawBits() const;
		void setRawBits(int const raw);
};

#endif