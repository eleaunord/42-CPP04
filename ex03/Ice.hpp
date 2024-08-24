#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &rhs);
	~Ice();

	std::string const &getType() const; 
	virtual AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
