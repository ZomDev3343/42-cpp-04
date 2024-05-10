/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:16:27 by tohma             #+#    #+#             */
/*   Updated: 2024/05/10 17:42:37 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
	this->brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &ref)
{
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou!" << std::endl;
}
