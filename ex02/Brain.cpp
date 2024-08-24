#include "Brain.hpp"

const std::string Brain::_errorMessage = "Invalid Index";

// Default constructor
Brain::Brain()
{
	this->_ideas = new std::string[100]; // Allocate memory for 100 std::string objects
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
	std::cout << "Brain's default constructor called" << std::endl;
}

// Copy constructor
Brain::Brain(const Brain &copy)
{
	this->_ideas = new std::string[100]; // Allocate memory for the new object
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i]; // Deep copy the ideas from the source object
	std::cout << "Brain's copy constructor called" << std::endl;
}

// Assignment operator
Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		delete[] this->_ideas;				 // Clean up old memory
		this->_ideas = new std::string[100]; // Allocate new memory
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i]; // Copy the contents
	}
	return *this;
}

// Destructor
Brain::~Brain()
{
	delete[] this->_ideas; // Free allocated memory
	std::cout << "Brain's destructor called" << std::endl;
}

// Getter for ideas with boundary check
const std::string &Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
	{
		return _errorMessage;
	}
	return this->_ideas[i];
}

// Setter for ideas with boundary check
void Brain::setIdea(int i, const std::string &idea)
{
	if (i < 0 || i >= 100)
	{
		std::cerr << _errorMessage << std::endl;
		return;
	}
	this->_ideas[i] = idea;
}
