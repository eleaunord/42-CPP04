#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <memory>
#include <iostream>

int main()
{
	// MY TESTS

	// std::cout << "Creating MateriaSource and Characters..." << std::endl;

	// // Create a MateriaSource and learn some Materia
	// std::unique_ptr<IMateriaSource> src(new MateriaSource());
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// // Create two Characters
	// std::unique_ptr<ICharacter> me(new Character("me"));
	// std::unique_ptr<ICharacter> bob(new Character("bob"));

	// // Test equipping Materia
	// std::cout << "\nEquipping Materia to 'me'..." << std::endl;
	// std::unique_ptr<AMateria> tmp1(src->createMateria("ice"));
	// std::unique_ptr<AMateria> tmp2(src->createMateria("cure"));
	// me->equip(tmp1.release());
	// me->equip(tmp2.release());

	// // Test using Materia
	// std::cout << "\n'Using' Materia..." << std::endl;
	// me->use(0, *bob);
	// me->use(1, *bob);

	// // Test unequipping Materia
	// std::cout << "\nUnequipping Materia..." << std::endl;
	// me->unequip(0);
	// me->unequip(1);

	// // Try to use Materia after unequipping
	// std::cout << "\nTrying to use unequipped Materia..." << std::endl;
	// me->use(0, *bob); // Should report nothing to use
	// me->use(1, *bob); // Should report nothing to use

	// // Test equipping more Materia than allowed
	// std::cout << "\nTrying to equip more than 4 Materia..." << std::endl;
	// std::unique_ptr<AMateria> tmp3(src->createMateria("ice"));
	// std::unique_ptr<AMateria> tmp4(src->createMateria("cure"));
	// std::unique_ptr<AMateria> tmp5(src->createMateria("ice"));
	// std::unique_ptr<AMateria> tmp6(src->createMateria("cure"));
	// std::unique_ptr<AMateria> tmp7(src->createMateria("ice")); // This one should not fit

	// me->equip(tmp3.release());
	// me->equip(tmp4.release());
	// me->equip(tmp5.release());
	// me->equip(tmp6.release());
	// me->equip(tmp7.release()); // should report that more than 4 items cannot be equipped

	// std::cout << "\nTesting MateriaSource copy..." << std::endl;
	// std::unique_ptr<IMateriaSource> srcCopy(new MateriaSource(*static_cast<MateriaSource *>(src.get())));
	// std::unique_ptr<AMateria> tmp8(srcCopy->createMateria("ice"));
	// std::unique_ptr<AMateria> tmp9(srcCopy->createMateria("cure"));

	// std::cout << "\nUsing Materia from copied MateriaSource..." << std::endl;
	// if (tmp8)
	// 	tmp8->use(*bob);
	// if (tmp9)
	// 	tmp9->use(*bob);

	// std::cout << "\nTesting Character copy assignment..." << std::endl;
	// std::unique_ptr<ICharacter> meCopy(new Character(*static_cast<Character *>(me.get())));
	// std::unique_ptr<AMateria> tmp10(src->createMateria("ice"));
	// std::unique_ptr<AMateria> tmp11(src->createMateria("cure"));
	// meCopy->equip(tmp10.release());
	// meCopy->equip(tmp11.release());

	// std::cout << "\nUsing Materia from copied Character..." << std::endl;
	// meCopy->use(0, *bob);
	// meCopy->use(1, *bob);

	// FROM SUBJECT

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;

	return 0;
}
