#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
    Dog(void);
    Dog(std::string const &type);
    Dog(Dog const &copy);
    virtual ~Dog(void);

    Dog &operator=(Dog const &rhs);

    void makeSound(void) const;
    Brain *getBrain();

private:
    Brain *_brain;
};

#endif
