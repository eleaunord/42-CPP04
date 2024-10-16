#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Dog's  copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    if (this != &rhs) {
        Animal::operator=(rhs);  // base class assignment operator
        // don't need to assign type again because Animal::operator= will do it
    }
    return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "*wOOof*" << std::endl;
}

