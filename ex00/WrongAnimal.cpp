#include "WrongAnimal.hpp"

// Canonical Form

// default constructor
WrongAnimal::WrongAnimal(void) : type("Wrong")
{
    std::cout << "WrongAnimal's default constructor called" << std::endl;
    return;
}

// parameterized constructor
WrongAnimal::WrongAnimal(std::string const &str) : type(str)
{
    std::cout << "WrongAnimal's parameterized constructor called" << std::endl;
    return;
}

// copy constructor
WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    std::cout << "WrongAnimal's copy constructor called" << std::endl;
}

// copy assignement operator
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << "WrongAnimal's assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}

// destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's destructor called" << std::endl;
    return;
}

// Functions

// Getters

std::string WrongAnimal::getType() const
{
    return (this->type);
}

// Member function

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
    return;
}