#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	type;

	public:
		Dog();		
		Dog(Dog &copy);
		Dog &operator=(Dog const &rhs);
		~Dog();

		void makeSound() const;
		std::string getType( void ) const;
};

#endif