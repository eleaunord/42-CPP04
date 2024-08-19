#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    private :
        std::string _type; // encapsulation

    public:
        // constructors
        Dog(void);
        Dog(Dog const &rhs);

        // operators
        Dog &operator=(Dog const &rhs);

        // destructors
        ~Dog();

        // getters
        std::string getType() const;
        
        // Member functions
        void makeSound() const;
};

#endif