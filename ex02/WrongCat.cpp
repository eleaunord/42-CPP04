#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat's default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	this->type = copy.getType();
	std::cout << "WrongCat's copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    if (this != &rhs) {
        WrongAnimal::operator=(rhs);  // base class assignment operator
        // don't need to assign type again because Animal::operator= will do it
    }
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "*bipmeow* (WrongCat noise)" << std::endl;
}