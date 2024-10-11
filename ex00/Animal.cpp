#include "Animal.hpp"

// constructors
Animal::Animal()
{
	this->type = "Unknown animal";
	std::cout << "Animal Default Constructor called" << std::endl;
}
// nb ; a copy constructor whould not modify the object being copied so it should take a cte reference
Animal::Animal(const Animal& copy) : type(copy.type)
{
    std::cout << "Animal's copy constructor called" << std::endl;
}
// assignation operator
Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

// destructor
Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

// getter function
std::string Animal::getType( void ) const
{
	return (this->type);
}

// member function 

void Animal::makeSound() const
{
	std::cout << "*brOOAAAwww* (unknown animal noise) " << std::endl;
}

