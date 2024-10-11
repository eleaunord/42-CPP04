#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		std::string	type;
		Brain *_brain;

	public:
		Dog();		
		Dog(const Dog &copy);
		Dog &operator=(const Dog &rhs);
		~Dog();

		void makeSound() const;
		std::string getType( void ) const;

		Brain *getBrain(void) const;
};

#endif