#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog Constructor called" << std::endl;
    _brain = new Brain;
    return;
}

Dog::Dog(Dog const &copy) : Animal()
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    _brain = new Brain;
    *this = copy;
    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor called" << std::endl;
    delete _brain;
    return;
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs.getType();
        delete _brain;
        _brain = new Brain(*rhs._brain);
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wooof.." << std::endl;
    return;
}

Brain *Dog::getBrain()
{
    return _brain;
}