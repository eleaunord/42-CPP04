#include "Dog.hpp"

// Canonical Form

// default constructor
Dog::Dog(void) : Animal(), _type("Dog")
{
    std::cout << "Dog's default constructor called" << std::endl;
    return ;
}

// destructor
Dog::~Dog()
{
    std::cout << "Dog's destructor called" << std::endl;
    return ;
}

// copy constructor
Dog::Dog(Dog const &rhs) : Animal(rhs), _type(rhs._type) // Copy _type from rhs
{
    if (this != &rhs)
        *this = rhs;
    std::cout << "Dog's copy constructor called" << std::endl;
}

// copy assignement operator
Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog's assignation operator called" << std::endl;
    if (this != &rhs)
    {
        Animal::operator=(rhs);  // Call the base class assignment operator
        this->_type = rhs._type; // Copy the _type
    }
    return *this;
}

// Functions

// Getters

std::string Dog::getType() const
{
    return (this->_type);
}

// Member functions

void Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
    return ;
}