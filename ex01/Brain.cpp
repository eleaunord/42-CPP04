#include "Brain.hpp"

const std::string Brain::_errorMessage = "Invalid Index";

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "";
    std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    *this = copy;
    return;
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
    return;
}

Brain &Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

const std::string &Brain::getIdea(int i) const
{
    if (i < 0 || i >= 100)
    {
        return _errorMessage;
    }
    return (_ideas[i]);
}

void Brain::setIdea(int i, const std::string &idea)
{
    if (i < 0 || i >= 100)
    {
        std::cerr << _errorMessage << std::endl;
        return;
    }
    _ideas[i] = idea;
}