#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    private :
        std::string _type; // encapsulation

    public :
        // constructors
        Cat(); // default
        Cat(Cat const &rhs); //copy

        // operators
        Cat &operator=(Cat const &rhs);

        //destructors
        ~Cat();

        // getters
        std::string getType() const;

        // Member functions
        void makeSound() const;
};

#endif