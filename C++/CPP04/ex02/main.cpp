/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:31:42 by miturk            #+#    #+#             */
/*   Updated: 2024/10/30 14:29:24 by miturk           ###   ########.fr       */
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
    AAnimal* Aanimals[4];
    Aanimals[0] = new Dog();
    Aanimals[1] = new Cat();
    Aanimals[2] = new Dog();
    Aanimals[3] = new Cat();
	Dog duck;
	{
		Dog duck2;
		std::cout << "<----------------------------------->" << std::endl;
    	for (int k = 0; k < 4; ++k) {
    	    Aanimals[k]->makeSound();
    	}
		duck2.getBrain().setIdea(0, "I am a dog, bork bork");
		std::cout << "duck2 thinks the following" << std::endl;
		std::cout << duck2.getBrain().getIdea(0) << std::endl;
		duck = duck2;
	}
	std::cout << "duck thinks the following" << std::endl;
	std::cout << duck.getBrain().getIdea(0) << std::endl;
	std::cout << "<----------DELETE-AAnimals---------->" << std::endl;
    for (int k = 0; k < 4; ++k) {
		std::cout << "Deleting Aanimal " << k << std::endl;
        delete Aanimals[k];
    }
	std::cout << "<----------DEEP-COPY----------->" << std::endl;
    // Test deep copy behavior
    Dog originalDog;
    Dog copyDog = originalDog;
    Cat originalCat;
    Cat copyCat = originalCat;

    return 0;
}