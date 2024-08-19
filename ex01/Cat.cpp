#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat Constructor called" << std::endl;
    _brain = new Brain;
    return;
}

Cat::Cat(Cat const &copy) : Animal()
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    _brain = new Brain;
    *this = copy;
    return;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor called" << std::endl;
    delete _brain;
    return;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs.getType();
        delete _brain;
        _brain = new Brain(*rhs._brain);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaouu.." << std::endl;
    return;
}

Brain *Cat::getBrain()
{
    return _brain;
}