#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain(); // Allocate a new Brain for each dog object
	this->type = "Dog";
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog(Dog &copy)
{
	this->_brain = new Brain(*copy._brain); // Deep copy the Brain
	this->type = copy.getType();
	std::cout << "Dog's  copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
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

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}