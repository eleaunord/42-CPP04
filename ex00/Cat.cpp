#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
	this->type = copy.getType();
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "*meoww*" << std::endl;
}

