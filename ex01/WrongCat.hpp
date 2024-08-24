#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongCat();
		WrongCat(WrongCat &copy);
		WrongCat &operator=(WrongCat const &rhs);
		~WrongCat();

		void makeSound() const;
};

#endif