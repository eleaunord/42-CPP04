#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

/*

Make Animal Abstract: 
Add a pure virtual function to make the Animal class abstract. 
A common choice is to add a pure virtual makeSound method, 
which forces derived classes to implement this method.

*/
class AAnimal
{

public:
    AAnimal(void);
    AAnimal(std::string type);
    AAnimal(AAnimal const &copy);
    virtual ~AAnimal(void);

    AAnimal &operator=(AAnimal const &rhs);

    // Pure virtual function making this an abstract class
    virtual void makeSound(void) const = 0;

    std::string getType(void) const;
    void setType(std::string type);

protected:
    std::string _type;
};

#endif