#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	type;

	public:
		Cat();		
		Cat(Cat &copy);
		Cat & operator=(Cat const &rhs);
		~Cat();

		void makeSound() const;
		std::string getType( void ) const;
};

#endif