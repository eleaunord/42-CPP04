#ifndef WrongCat_HPP
#define WrongCat_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string _type; // encapsulation

public:
    // constructors
    WrongCat();               // default
    WrongCat(WrongCat const &rhs); // copy

    // operators
    WrongCat &operator=(WrongCat const &rhs);

    // destructors
    ~WrongCat();

    // getters
    std::string getType() const;

    // Member functions
    void makeSound() const;
};

#endif