#include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain(); // Allocate a new Brain for each Cat object
	this->type = "Cat";
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
	this->_brain = new Brain(*copy._brain); // Deep copy the Brain
	this->type = copy.getType();
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    if (this != &rhs) {
        AAnimal::operator=(rhs);
    }
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
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

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}
