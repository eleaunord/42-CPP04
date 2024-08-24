#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	type;
		Brain *_brain;

	public:
		Dog();		
		Dog(Dog &copy);
		Dog &operator=(Dog const &rhs);
		~Dog();

		void makeSound() const;
		std::string getType( void ) const;

		Brain *getBrain(void) const;
};

#endif