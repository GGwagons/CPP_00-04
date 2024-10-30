/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:31:42 by miturk            #+#    #+#             */
/*   Updated: 2024/10/30 10:43:40 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();

    delete j; // Should call Dog destructor and Brain destructor
    delete i; // Should call Cat destructor and Brain destructor

    // Testing array of animals with mixed types
    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int k = 0; k < 4; ++k) {
        animals[k]->makeSound();
    }

    for (int k = 0; k < 4; ++k) {
        delete animals[k];
    }

    // Test deep copy behavior
    Dog originalDog;
    Dog copyDog = originalDog;
    Cat originalCat;
    Cat copyCat = originalCat;

    return 0;
}