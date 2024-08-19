#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
    protected:
        std::string type;

    public :
        // Constructors
        Animal(void); // default
        Animal(std::string const & str); // parameterized
        Animal(Animal const &rhs); // copy

        // Operators
        Animal &operator=(Animal const &rhs);

        // Destructor
        ~Animal();

        // Member functions
        virtual void makeSound() const;

        // Getters
        virtual std::string getType() const;
};

#endif