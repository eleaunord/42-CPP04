#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


class Brain
{

public:
    Brain(void);
    Brain(Brain const &copy);
    ~Brain(void);

    Brain &operator=(Brain const &rhs);
    void setIdea(int idx, const std::string &idea);
    const std::string& getIdea(int i) const;

    private : 
        std::string _ideas[100];
        static const std::string _errorMessage;
};

#endif
