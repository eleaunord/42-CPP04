#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

public:
    Cat(void);
    Cat(Cat const &copy);
    virtual ~Cat(void);

    Cat &operator=(Cat const &rhs);

    void makeSound(void) const;
    Brain *getBrain();

private:
    Brain *_brain;
};

#endif
