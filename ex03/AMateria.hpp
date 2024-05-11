/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:22:56 by tohma             #+#    #+#             */
/*   Updated: 2024/05/11 13:43:51 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string.h>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string &type);
		AMateria(const AMateria &ref);
		~AMateria(void);
		AMateria &operator=(const AMateria &ref);

		std::string const &getType(void);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

class MateriaIce : public AMateria
{
	public:
		MateriaIce(std::string &type);
		MateriaIce(const MateriaIce &ref);
		~MateriaIce(void);
		MateriaIce &operator=(const MateriaIce &ref);

		AMateria* clone() const;
		void use(ICharacter &target);
};

class MateriaCure : public AMateria
{
	public:
		MateriaCure(std::string &type);
		MateriaCure(const MateriaCure &ref);
		~MateriaCure(void);
		MateriaCure &operator=(const MateriaCure &ref);

		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif