#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : _count(0)
{
	// std::cout << "MateriaSource's default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy) : _count(copy._count)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = std::unique_ptr<AMateria>(copy._inventory[i]->clone());
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		_count = rhs._count;
		for (int i = 0; i < 4; i++)
		{
			_inventory[i].reset();
			if (rhs._inventory[i])
				_inventory[i] = std::unique_ptr<AMateria>(rhs._inventory[i]->clone());
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource's default constructor called" << std::endl;
}
void MateriaSource::learnMateria(AMateria *m)
{
	if (m == nullptr)
	{
		std::cout << "Cannot learn nullptr" << std::endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = std::unique_ptr<AMateria>(m);
			return;
		}
	}

	// If the inventory is full, delete the materia
	delete m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	//printf("MateriaSource's createMateria called for type: %s\n", type.c_str());
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			//printf("MateriaSource found Materia of type %s at index %d\n", type.c_str(), i);
			return _inventory[i]->clone();
		}
	}
	//printf("MateriaSource could not find Materia of type %s\n", type.c_str());
	return nullptr;
}
