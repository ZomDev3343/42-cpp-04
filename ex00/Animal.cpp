/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:16:27 by tohma             #+#    #+#             */
/*   Updated: 2024/05/09 20:33:51 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = ref.getType();
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &ref)
{
	this->type = ref.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}