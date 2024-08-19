#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        // Constructors
        WrongAnimal(void);              // default
        WrongAnimal(std::string const &str); // parameterized
        WrongAnimal(WrongAnimal const &rhs); // copy

        // Operators
        WrongAnimal &operator=(WrongAnimal const &rhs);

        // Destructor
        ~WrongAnimal();

        // Member functions
        virtual void makeSound() const;

        // Getters
        virtual std::string getType() const;
};

#endif