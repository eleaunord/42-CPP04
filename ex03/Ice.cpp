#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : AMateria("ice") // Call base class constructor with type "ice"
{
	// std::cout << "Ice's default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy) // Initialize base class in copy constructor
{
	// std::cout << "Ice's copy constructor called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice's destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	// std::cout << "Ice's assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type; // Use base class assignment operator
	}
	return *this;
}

std::string const &Ice::getType(void) const // Return type must be a reference
{
	return AMateria::getType(); // Use base class getType()
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}