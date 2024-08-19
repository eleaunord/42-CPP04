
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Creating a Cat instance named cat1..." << std::endl;
	Cat cat1; // Default constructor
	std::cout << "cat1 type: " << cat1.getType() << std::endl;
	cat1.makeSound();

	std::cout << "\nCreating a Cat instance named cat2 using the copy constructor..." << std::endl;
	Cat cat2(cat1); // Copy constructor
	std::cout << "cat2 type: " << cat2.getType() << std::endl;
	cat2.makeSound();

	std::cout << "\nCreating a Cat instance named cat3 using the assignment operator..." << std::endl;
	Cat cat3;	 // Default constructor
	cat3 = cat1; // Copy assignment operator
	std::cout << "cat3 type: " << cat3.getType() << std::endl;
	cat3.makeSound();

	std::cout << "\nTesting the assignment operator by assigning cat2 to cat3..." << std::endl;
	cat3 = cat2; // Assignment operator
	std::cout << "cat3 type after assignment: " << cat3.getType() << std::endl;
	cat3.makeSound();

	std::cout << "\nAll Cat instances will now be destroyed as they go out of scope." << std::endl;

	std::cout << std::endl;

	std::cout << "Creating a Dog instance named dog1..." << std::endl;
	Dog dog1; // Default constructor
	std::cout << "dog1 type: " << dog1.getType() << std::endl;
	dog1.makeSound();

	std::cout << "\nCreating a Dog instance named dog2 using the copy constructor..." << std::endl;
	Dog dog2(dog1); // Copy constructor
	std::cout << "dog2 type: " << dog2.getType() << std::endl;
	dog2.makeSound();

	std::cout << "\nCreating a Dog instance named dog3 using the assignment operator..." << std::endl;
	Dog dog3;	 // Default constructor
	dog3 = dog1; // Copy assignment operator
	std::cout << "dog3 type: " << dog3.getType() << std::endl;
	dog3.makeSound();

	std::cout << "\nTesting the assignment operator by assigning dog2 to dog3..." << std::endl;
	dog3 = dog2; // Assignment operator
	std::cout << "dog3 type after assignment: " << dog3.getType() << std::endl;
	dog3.makeSound();

	std::cout << "\nAll Dog instances will now be destroyed as they go out of scope." << std::endl;

	std::cout << std::endl;

	std::cout << "Correct Polymorphism Example:" << std::endl;
	const Animal *animal = new Animal();
	const Animal *cat = new Cat();
	std::cout << "animal type: " << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << "cat type: " << cat->getType() << std::endl;
	cat->makeSound();
	delete animal;
	delete cat;

	std::cout << "\nLack of Polymorphism Example:" << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << "wrongAnimal type: " << wrongAnimal->getType() << std::endl;
	wrongAnimal->makeSound();
	std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
	wrongCat->makeSound(); // Outputs "bip bip bip" as expected now
	delete wrongAnimal;
	delete wrongCat;


	std::cout << "\nMain from the subject:" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}


