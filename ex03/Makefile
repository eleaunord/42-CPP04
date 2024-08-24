NAME := ex03

INCLUDES := -I $(CURDIR)

SRCS := main.cpp Character.cpp AMateria.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++14 -pedantic

RM := rm -f

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
