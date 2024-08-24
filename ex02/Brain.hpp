#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string *_ideas;
	static const std::string _errorMessage;

public:
	// Constructors and Destructor
	Brain();
	Brain(const Brain &copy);
	~Brain();

	// Operators
	Brain &operator=(const Brain &rhs);

	// Member functions
	void setIdea(int i, const std::string &idea);
	const std::string &getIdea(int i) const;
};

#endif
