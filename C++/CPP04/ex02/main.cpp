/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:31:42 by miturk            #+#    #+#             */
/*   Updated: 2024/10/30 15:51:26 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main() {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();

    delete j; // Should call Dog destructor and Brain destructor
    delete i; // Should call Cat destructor and Brain destructor
	std::cout << "<----------------------------------->" << std::endl;
    // Testing array of Aanimals with mixed types
	Dog dog;
	Cat cat;
    AAnimal* Aanimals[100];
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0) {
			Aanimals[i] = new Dog();
			Aanimals[i]->makeSound();
			dog.getBrain().setIdea(i, "I am a dog, bork bork");
			std::cout << dog.getBrain().getIdea(i) << std::endl;
			std::cout << std::endl;
		}
		else {
			Aanimals[i] = new Cat();
			Aanimals[i]->makeSound();
			cat.getBrain().setIdea(i, "I am a cat, meow meow");
			std::cout << cat.getBrain().getIdea(i) << std::endl;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "<----------DELETE-AAnimals---------->" << std::endl;
	std::cout << std::endl;
	for (int k = 0; k < 100; ++k) {
		delete Aanimals[k];
	}
    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "<----------DEEP-COPY----------->" << std::endl;
	std::cout << std::endl;
    // Test deep copy behavior
    Dog originalDog;
    Dog copyDog = originalDog;
    Cat originalCat;
    Cat copyCat = originalCat;

    return 0;
}