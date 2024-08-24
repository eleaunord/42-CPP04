#include "Animal.hpp"

// constructors
Animal::Animal()
{
	this->type = "Unknown animal";
	std::cout << "Animal Default Constructor called" << std::endl;
}
Animal::Animal(Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal's copy constructor called" << std::endl;
}
// assignation operator
Animal &Animal::operator=(Animal const &rhs)
{
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

