/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:02:38 by tohma             #+#    #+#             */
/*   Updated: 2024/07/03 11:51:03 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
	protected:
		std::string type;
		void setType(std::string type);
		
	public:
		Animal();
		Animal(const Animal &ref);
		virtual ~Animal();
		Animal &operator=(const Animal &ref);
		
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif