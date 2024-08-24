#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat's default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
	this->type = copy.getType();
	std::cout << "WrongCat's copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
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