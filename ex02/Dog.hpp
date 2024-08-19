#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{

public:
    Dog(void);
    Dog(std::string const &type);
    Dog(Dog const &copy);
    virtual ~Dog(void);

    Dog &operator=(Dog const &rhs);

    void makeSound(void) const override;
    Brain *getBrain();

private:
    Brain *_brain;
};

#endif
