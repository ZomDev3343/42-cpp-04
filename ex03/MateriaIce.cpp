/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaIce.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:41:29 by tohma             #+#    #+#             */
/*   Updated: 2024/05/11 13:57:12 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

MateriaIce::MateriaIce(std::string &type) : AMateria(type)
{
	std::cout << "MateriaIce constructor called" << std::endl;
}

MateriaIce::MateriaIce(const MateriaIce &ref) : AMateria(ref)
{
	std::cout << "MateriaIce copy constructor called" << std::endl;
}

MateriaIce::~MateriaIce(void)
{
	std::cout << "MateriaIce destructor called" << std::endl;
}

MateriaIce &MateriaIce::operator=(const MateriaIce &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria* MateriaIce::clone(void) const
{
	return (new MateriaIce(*this));
}

void MateriaIce::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}