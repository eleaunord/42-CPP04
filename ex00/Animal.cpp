#include "Animal.hpp"

// Canonical Form

// default constructor
Animal::Animal(void) : type("Unknown")
{
    std::cout << "Animal's default constructor called" << std::endl;
    return ;
}

// parameterized constructor
Animal::Animal(std::string const &str) : type(str)
{
    std::cout << "Animal's parameterized constructor called" << std::endl;
    return;
}

// copy constructor
Animal::Animal(Animal const &rhs)
{ 
    if (this != &rhs)
        *this = rhs;
    std::cout << "Animal's copy constructor called" << std::endl;
}

// copy assignement operator
Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal's assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}

// destructor
Animal::~Animal()
{
    std::cout << "Animal's destructor called" << std::endl;
    return;
}

// Functions

// Getters

std::string Animal::getType() const
{
    return (this->type);
}

// Member function

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
    return ;
}