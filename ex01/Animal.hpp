#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{

public:
    Animal(void);
    Animal(std::string type);
    Animal(Animal const &copy);
    virtual ~Animal(void);

    Animal &operator=(Animal const &rhs);

    virtual void makeSound(void) const;
    std::string getType(void) const;
    void setType(std::string type);

protected:
    std::string _type;
};

#endif