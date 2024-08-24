#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain *_brain;

	public:
		Cat();		
		Cat(Cat &copy);
		Cat & operator=(Cat const &rhs);
		~Cat();

		void makeSound() const;
		std::string getType( void ) const;

		Brain *getBrain(void) const;
};

#endif