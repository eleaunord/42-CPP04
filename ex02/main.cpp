#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*
	Difference btwn Dog dog; and AAnimal *mydog = new Dog();

	Dog dog;
	- creates a Dog object on the stack
	- The object dog is automatically destroyed when it goes out of scope,
	such as at the end of a function or block where it's declared.
	- The memory management is handled automatically by the system,
	which means you don’t need to manually deallocate the memory.
	- If you want to use polymorphism (e.g., calling overridden methods from a base class pointer),
	this direct instantiation does not involve pointers or base class references.
	- automatic storage duration (handled by the compiler)

	AAnimal *mydog = new Dog();
	- creates a Dog object on the heap and assigns its address to a pointer of
	type AAnimal*
	- new = dynamically allocates memory for a Dog object and returns a pointer to it
	-  responsible for manually deallocating this memory using delete to avoid memory leaks
	- allows you to use polymorphism because mydog is a pointer to the base class AAnimal,
	but it actually points to a Dog object.
	- You can call virtual functions declared in AAnimal that may be overridden in Dog
	- dynamic storage duration (handled by delete)

*/

int main()
{

	// if we uncomment the following line then we will have a compile time error bc we can't instantiate an abstract class

	//AAnimal animal; // this line should cause a compile error

	// Instantiate derived classes
	Dog dog;
	Cat cat;

	// Test the derived classes
	std::cout << "dog type: " << dog.getType() << std::endl;
	dog.makeSound();

	std::cout << "cat type: " << cat.getType() << std::endl;
	cat.makeSound();

	std::cout << std::endl;

	AAnimal *mydog = new Dog();
	std::cout << "dog type: " << mydog->getType() << std::endl;
	mydog->makeSound();

	delete mydog;

	std::cout << std::endl;

	AAnimal *mycat = new Cat();
	std::cout << "cat type: " << mycat->getType() << std::endl;
	mycat->makeSound();

	delete mycat;

	std::cout << std::endl;
	// if we uncomment the following line then we will have a compile time error bc we can't instantiate an abstract class
	//AAnimal* mypony = new AAnimal();

	return 0;
}