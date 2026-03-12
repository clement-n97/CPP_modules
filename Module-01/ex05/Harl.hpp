/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:49:57 by clnicola          #+#    #+#             */
/*   Updated: 2026/03/12 13:56:54 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>


class Harl{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level );
};


#endif