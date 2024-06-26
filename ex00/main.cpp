/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:36:32 by tohma             #+#    #+#             */
/*   Updated: 2024/05/09 20:51:11 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int main(void)
// {
// 	Cat chat;
// 	Dog chien;

// 	chat.makeSound();
// 	chien.makeSound();

// 	return (0);
// }

// int main()
// {
// 	const Animal *meta = new Animal();
// 	const Animal *j = new Dog();
// 	const Animal *i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); // will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	return 0;
// }

int main()
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	meta->makeSound();
	return 0;
}