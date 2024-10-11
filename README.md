## Exercise 00: Polymorphism

This exercise focuses on **subtype polymorphism** in C++. Even though we are interacting with the base class pointer or referencem the correct overridden method of the derived class is called at runtime. 

_What is polymorphism ?_

Polymorphism allows us to define a **method** in a **base** class and have it behave **differently** depending on which derived class is used. Runtime polymorphism is the ability of C++ to decide which function to call based on the object type at runtime, rather than at compile-time. Runtime polymoprhism is done using virutal function and pointers or references to a base class. 

_What are virtual functions ? _

When we declare a function in a base class as virtual, it means that C++ will determine which version of the function to call at runtime, depending on the actual type of the object being pointed to, not the type of the pointer itself.
NB : compile-time is  achieved through mechanisms like function overloading or operator overloading, where the function to call is determined by the argument types during compilation.

So the goal of Exercise 00 is to demonstrate runtime polymorphism using virtual functions, constructors, and destructors to show that C++ can differentiate between derived types even when using a base class pointer.

_Zoom on the tests_

Correct polymorphism example :

const Animal *animal = new Animal(); // we create a pointer to a base class Animal => default constructor called
const Animal *cat = new Cat(); // we create a pointer to a base class Animal BUT point it to a Cat object
std::cout << "animal type: " << animal->getType() << std::endl;
animal->makeSound(); => prints the base class data
std::cout << "cat type: " << cat->getType() << std::endl;
cat->makeSound(); // cat sound even though it's an Animal base class bc makeSound function is virtual in the Animal class so runtime poly
delete animal;
delete cat;

Polymorphism allows us to call the Cat's version of makeSound() even though the pointer type is Animal ; with runtime polymorphism we can treat objects of different types in an uniform way using a base class pointer, while the correct derived class method is called at runtime.

Lack of Polymorphism Example:

const WrongAnimal *wrongAnimal = new WrongAnimal();
const WrongAnimal *wrongCat = new WrongCat();
std::cout << "wrongAnimal type: " << wrongAnimal->getType() << std::endl;
wrongAnimal->makeSound();
std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
wrongCat->makeSound(); // will still output the WrongAnimal sound bc in the WrongAnimal/WrongCat case, the makeSound() function is not declared as virtual in WrongAnimal.Since it’s not virtual, there is no runtime polymorphism, and the function that gets called is determined by the pointer type (WrongAnimal), not the actual object type (WrongCat).
delete wrongAnimal;
delete wrongCat;

## Exercise 01: I don’t want to set the world on fire

This exercise adds the concept of **dynamic memory management** and **deep copying** to our classes.

_Manual memory management_

Since Brain is allocated dynamically using new, we must delete it explicitly in the destructor of Dog and Cat to avoid memory leaks.
The exercise encourages you to check for memory leaks using tools like valgrind or similar memory checking tools to ensure that you’re handling dynamic memory correctly.

_Deep Copy vs Shallow Copy_

The copy of a Dog or Cat must be a deep copy.
A shallow copy would just copy the address of the Brain pointer, meaning both Dog/Cat objects would share the same Brain object. This is dangerous because if one object modifies or deletes the Brain, it would affect the other.
In a deep copy, a new Brain object is created and all the ideas from the original are copied into the new Brain.

Example :

Let's have :
- wishkers1 is created and initialized with its own Brain object.
- wishkers2 is created using the copy constructor of Cat, which should result in wishkers2 having its own separate Brain object.
- If the Brain pointers are different and changes to one Brain do not affect the other, the copy constructor performs a deep copy.
- If the Brain pointers are the same and changes affect both Cat instances, the copy constructor performs a shallow copy.

## Exercise 02: Abstract class

The goal is to  to ensure that the base Animal class can no longer be instantiated directly, as it doesn't make sense to create generic Animal objects. Instead, the class should become abstract, forcing the creation of only derived classes like Cat and Dog, which make actual sounds.

_What is an abstract class ?_

An abstract class cannot be instantiated on its own. It serves as a blueprint for derived classes that implement or specialize certain behaviors.
In C++, making a class abstract is done by declaring at least one pure virtual function. A pure virtual function is a function that has no implementation in the base class and must be overridden in derived classes.

Syntax to declare a pure virutal function :
virtual void makeSound() const = 0;

In practice :

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

## Exercise 03: Interface & recap

The goal of this exercise is to implement and understand the concept of interfaces in C++ through the use of pure abstract classes. 




