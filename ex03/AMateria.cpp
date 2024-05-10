/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:26:34 by tohma             #+#    #+#             */
/*   Updated: 2024/05/10 18:35:56 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string &ref)
{
	std::cout << "AMateria constructor called" << std::endl;
	this->type = ref;
}

AMateria::AMateria(const AMateria &ref)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = ref;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
	this->type = ref.type;
	return (*this);
}

std::string const &AMateria::getType(void)
{
	return this->type;
}

void AMateria::use(ICharacter &target) {}