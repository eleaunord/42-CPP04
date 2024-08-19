#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

const int listSize = 4;

int main()
{
    //  list of Animal objects : half Dog half Cat

    const Animal *list[listSize];
    // fill list
    for (int i = 0; i < listSize; i++)
    {
        if (i % 2 == 0)
            list[i] = new Dog();
        else
            list[i] = new Cat();
    }
    std::cout << std::endl;

    // check initialization
    for (int i = 0; i < listSize; i++)
    {
        std::cout << "list[" << i << "]: type: " << list[i]->getType() << " and voice : ";
        list[i]->makeSound();
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // delete list
    for (int i = 0; i < listSize; i++)
    {
        delete list[i];
    }
    std::cout << std::endl;

    // Deep copying test
    /*
        wishkers1 is created and initialized with its own Brain object.
        wishkers2 is created using the copy constructor of Cat,
        which should result in wishkers2 having its own separate Brain object.
        If the Brain pointers are different and changes to one Brain do not affect the other, the copy constructor performs a deep copy.
        If the Brain pointers are the same and changes affect both Cat instances, the copy constructor performs a shallow copy.
    */
    std::cout << "Cat class deep copy tests : " << std::endl;
    std::cout << std::endl;
    std::cout << "first cat created : " << std::endl;
    Cat wishkers1;
    std::cout << std::endl;
    std::cout << "second cat created : " << std::endl;
    Cat wishkers2(wishkers1); // wishkers2 is init as a copy of wishkers1

    std::cout << std::endl;
    std::cout << "getting the cats' brains (the brain's addresses must be different): " << std::endl;
    std::cout << "wishkers1's brain: " << wishkers1.getBrain() << std::endl;
    std::cout << "wishkers2's brain: " << wishkers2.getBrain() << std::endl;

    std::cout << std::endl;
    std::cout << "sending ideas to the cats' brains (the ideas must be different) : " << std::endl;
    wishkers1.getBrain()->setIdea(0, "eat a mouse");
    wishkers2.getBrain()->setIdea(0, "play with the duvet");

    std::cout << "wishkers1's idea : " << wishkers1.getBrain()->getIdea(0) << std::endl;
    std::cout << "wishkers2's idea : " << wishkers2.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl;
    std::cout << "Dog class deep copy tests : " << std::endl;
    std::cout << std::endl;

    std::cout << "first dog created : " << std::endl;
    Dog rex1;
    std::cout << std::endl;
    std::cout << "second dog created : " << std::endl;
    Dog rex2(rex1);
    std::cout << std::endl;

    std::cout << "getting the dogs' brains : " << std::endl;
    std::cout << "rex1's brain: " << rex1.getBrain() << std::endl;
    std::cout << "rex2's brain: " << rex2.getBrain() << std::endl;

    std::cout << std::endl;
    std::cout << "sending ideas to the dogs' brains : " << std::endl;
    rex1.getBrain()->setIdea(0, "eat scoobydoos");
    rex2.getBrain()->setIdea(0, "play with the ball");

    std::cout << "rex1's idea : " << rex1.getBrain()->getIdea(0) << std::endl;
    std::cout << "rex2's idea : " << rex2.getBrain()->getIdea(0) << std::endl;
    std::cout << std::endl;

    return 0;
}