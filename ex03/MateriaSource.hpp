#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <memory>

class MateriaSource : public IMateriaSource
{
private:
	std::unique_ptr<AMateria> _inventory[4];
	int _count;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &rhs);
	~MateriaSource();

	void learnMateria(AMateria *m) override;
	AMateria *createMateria(const std::string &type) override;
};

#endif
