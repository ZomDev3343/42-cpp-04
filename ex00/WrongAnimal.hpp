/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:41:08 by tohma             #+#    #+#             */
/*   Updated: 2024/07/03 11:50:07 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal
{
	protected:
		std::string type;
		void setType(std::string type);
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &ref);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &ref);
		
		std::string getType(void) const;
		void makeSound(void) const;	
};

#endif