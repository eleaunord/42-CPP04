#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Cat's copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs) {
        Animal::operator=(rhs);  // base class assignment operator
        // don't need to assign type again because Animal::operator= will do it
    }
    return *this;
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

