/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:37:57 by truello           #+#    #+#             */
/*   Updated: 2024/05/11 15:47:32 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character(void)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &ref)
{
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &ref)
{
	this->name = ref.getName();
	//TODO
	return (*this);
}
