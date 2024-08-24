#ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &copy);
	Cure &operator=(const Cure &rhs);
	~Cure();

	std::string const &getType() const;
	virtual AMateria *clone() const;
	void use(ICharacter &target);
};

#endif