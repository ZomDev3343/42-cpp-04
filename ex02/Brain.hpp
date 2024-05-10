/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:22:05 by truello           #+#    #+#             */
/*   Updated: 2024/05/10 17:24:11 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& ref);
		~Brain(void);
		Brain &operator=(const Brain &ref);

};

#endif
