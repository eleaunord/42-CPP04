
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's default constructor" << std::endl;
	this->type = "WrongAnimal";
}



WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "WrongAnimal's copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "*bip bip bip* (WrongAnimal noise)" << std::endl;
}

