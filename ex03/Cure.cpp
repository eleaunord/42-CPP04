#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : AMateria("cure") // Call base class constructor with type "Cure"
{
	// std::cout << "Cure's default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy) // Initialize base class in copy constructor
{
	// std::cout << "Cure's copy constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure's destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	// //std::cout << "Cure's assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type; // Use base class assignment operator
	}
	return *this;
}

std::string const &Cure::getType(void) const // Return type must be a reference
{
	return AMateria::getType(); // Use base class getType()
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this); // Return a new instance that is a copy of the current object
}
