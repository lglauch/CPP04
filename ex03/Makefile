NAME := program

CC := c++

CPPFLAGS := -Wall -Wextra -Werror

SRCS := main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp MateriaSource.cpp

OBJ := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re