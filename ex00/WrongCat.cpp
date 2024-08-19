#include "WrongCat.hpp"

// Canonical Form

// constructor
WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "WrongCat's default constructor called" << std::endl;
    return;
}

// copy constructor
WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs)
{
    if (this != &rhs)
        *this = rhs;
    std::cout << "WrongCat's copy constructor called" << std::endl;
}
// copy assignement operator
WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
    {
        WrongAnimal::operator=(rhs); // Call the base class assignment operator
        this->_type = rhs._type; // Copy the _type
    }
    return *this;
}
// destructor
WrongCat::~WrongCat()
{
    std::cout << "WrongCat's destructor called" << std::endl;
    return;
}

// functions

// getters
std::string WrongCat::getType() const
{
    return (this->_type);
}

// member functions

void WrongCat::makeSound() const
{
    std::cout << "bip bip bip" << std::endl;
    return;
}
