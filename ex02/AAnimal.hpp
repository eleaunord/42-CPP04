#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();

		virtual std::string getType( void ) const;

		// Pure virtual function making this an abstract class
		virtual void makeSound() const = 0;
};

#endif