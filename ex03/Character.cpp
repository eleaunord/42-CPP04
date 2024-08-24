#include "Character.hpp"

Character::Character() : _name("Undefined")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Character's default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	// std::cout << "Character's parameterized constructor called" << std::endl;
}

Character::Character(const Character &copy) : _name(copy.getName() + "_copy")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	// std::cout << "Character's copy constructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
		// Can't reassign _name because it's const
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	// std::cout << "Character's destructor called" << std::endl;
}

// accessors
std::string const &Character::getName() const
{
	return (this->_name);
}
// member function
void Character::equip(AMateria *mat)
{
	int i = 0;

	if (!mat)
	{
		std::cout << this->_name << " tried to equip nothing. No action done." << std::endl;
		return;
	}

	while (i < 4 && this->_inventory[i] != nullptr)
		i++;

	if (i >= 4)
	{
		std::cout << this->_name << " cannot equip more than 4 items" << std::endl;
		return;
	}

	this->_inventory[i] = mat;
	//std::cout << this->_name << " equipped Materia item " << mat->getType() << " in index " << i << std::endl;
}
void Character::unequip(int index)
{
	if (index < 0 || index >= 4)
	{
		std::cout << this->_name << " tried to unequip nothing at index " << index << ". No action done." << std::endl;
	}
	else if (this->_inventory[index] == nullptr)
	{
		std::cout << this->_name << " has no equipment at index " << index << " so he cannot unequip it." << std::endl;
	}
	else
	{

		AMateria *ptr = this->_inventory[index];

		// Print message about the unequipped Materia
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot " << index << std::endl;

		// Set the slot to nullptr before deleting the Materia
		this->_inventory[index] = nullptr;

		// Delete the Materia object to prevent memory leak
		delete ptr;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == nullptr)
	{
		std::cout << "Nothing found to be used at index " << idx << std::endl;
		return;
	}
	this->_inventory[idx]->use(target);
}

AMateria *Character::getMateriaFromInventory(int i)
{
	return (this->_inventory)[i];
}
