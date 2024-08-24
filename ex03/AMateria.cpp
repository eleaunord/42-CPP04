#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined AMateria")
{
	//std::cout << "AMateria's default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	// std::cout << "AMateria's parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
	// std::cout << "AMateria's copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria's destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria abstractly use on " << target.getName() << std ::endl;
}
