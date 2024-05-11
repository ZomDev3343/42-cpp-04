/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaCure.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:41:29 by tohma             #+#    #+#             */
/*   Updated: 2024/05/11 14:17:17 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

MateriaCure::MateriaCure(std::string &type) : AMateria(type)
{
	std::cout << "MateriaCure constructor called" << std::endl;
}

MateriaCure::MateriaCure(const MateriaCure &ref) : AMateria(ref)
{
	std::cout << "MateriaCure copy constructor called" << std::endl;
}

MateriaCure::~MateriaCure(void)
{
	std::cout << "MateriaCure destructor called" << std::endl;
}

MateriaCure &MateriaCure::operator=(const MateriaCure &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria* MateriaCure::clone(void) const
{
	return (new MateriaCure(*this));
}

void MateriaCure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}