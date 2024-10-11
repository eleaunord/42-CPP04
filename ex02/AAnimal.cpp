#include "AAnimal.hpp"

// constructors
AAnimal::AAnimal()
{
	this->type = "Unknown AAnimal";
	std::cout << "AAnimal's default constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal& copy) : type(copy.type)
{
	this->type = copy.type;
	std::cout << "AAnimal's copy constructor called" << std::endl;
}
// assignation operator
AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

// destructor
AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

// getter function
std::string AAnimal::getType( void ) const
{
	return (this->type);
}

// member function 

void AAnimal::makeSound() const
{
	std::cout << "*brOOAAAwww* (unknown AAnimal noise) " << std::endl;
}

