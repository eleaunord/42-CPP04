#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default Constructor called" << std::endl;
    return;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Constructor called" << std::endl;
    return;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
    return;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
    return;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "...random animal noise..." << std::endl;
    return;
}

std::string Animal::getType(void) const
{
    return (_type);
}

void Animal::setType(std::string type)
{
    _type = type;
    return;
}