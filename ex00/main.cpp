#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Cat.hpp"
#include <iostream>

#include "Cat.hpp"
#include <iostream>

int main()
{

    // test the default constructor
    Cat cat1; // Default constructor
    std::cout << "cat1 type: " << cat1.getType() << std::endl;
    std::cout << "cat1 sound: ";
    cat1.makeSound();

    // test the copy constructor
    std::cout << "\nCreating a second Cat using copy constructor..." << std::endl;
    Cat cat2(cat1); // copy constructor
    std::cout << "cat2 type: " << cat2.getType() << std::endl;
    std::cout << "cat2 sound: ";
    cat2.makeSound();

    // test the assignment operator
    std::cout << "\nCreating a third Cat using assignment operator..." << std::endl;
    Cat cat3;
    cat3 = cat1; // assignment operator
    std::cout << "cat3 type: " << cat3.getType() << std::endl;
    std::cout << "cat3 sound: ";
    cat3.makeSound();
    std::cout << std::endl;

    std::cout << "Creating a Dog instance named dog1..." << std::endl;

    Dog dog1; // Default constructor
    std::cout << "dog1 type: " << dog1.getType() << std::endl;
    std::cout << "dog1 sound: ";
    dog1.makeSound();

    std::cout << "\nCreating a second Dog using copy constructor..." << std::endl;
    Dog dog2(dog1); // Copy constructor
    std::cout << "dog2 type: " << dog2.getType() << std::endl;
    std::cout << "dog2 sound: ";
    dog2.makeSound();

    std::cout << "\nCreating a third Dog using assignment operator..." << std::endl;
    Dog dog3;
    dog3 = dog1; // Assignment operator
    std::cout << "dog3 type: " << dog3.getType() << std::endl;
    std::cout << "dog3 sound: ";
    dog3.makeSound();

    std::cout << std::endl;

    std::cout << "\nMain from the subject :" << std::endl;

    std::cout << std::endl;

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << "j is " << j->getType() << " : ";
    j->makeSound();
    std::cout << "i is " << i->getType() << " : ";
    i->makeSound();
    std::cout << "m is " << meta->getType() << " : ";
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << std::endl;

    const WrongAnimal *w = new WrongCat();
    std::cout << "w is " << w->getType() << " : ";
    w->makeSound();

    delete w;

    return 0;
}
