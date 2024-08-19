#include "Cat.hpp"

// Canonical Form 

// constructor
Cat::Cat() : Animal(), _type("Cat")
{
    std::cout << "Cat's default constructor called" << std::endl;
    return ;
}

// copy constructor
Cat::Cat(Cat const &rhs) : Animal(rhs), _type(rhs._type)
{
    if (this != &rhs)
        *this = rhs;
    std::cout << "Cat's copy constructor called" << std::endl;
}
// copy assignement operator
Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        Animal::operator=(rhs);  // Call the base class assignment operator
        this->_type = rhs._type; // Copy the _type
    }
    return *this;
}
// destructor
Cat::~Cat()
{
    std::cout << "Cat's destructor called" << std::endl;
    return ;
}

// functions

// getters
std::string Cat::getType() const
{
    return this->_type; // return the inherited type
}

// member functions

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
    return;
}
