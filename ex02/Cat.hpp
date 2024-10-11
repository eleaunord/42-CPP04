#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		std::string	type;
		Brain *_brain;

	public:
		Cat();		
		Cat(const Cat &copy);
		Cat & operator=(const Cat &rhs);
		~Cat();

		void makeSound() const;
		std::string getType( void ) const;

		Brain *getBrain(void) const;
};

#endif