CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
NAME = Animal
FILES = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
OBJECTS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		$(CC) $(CPPFLAGS) $^ -o $@

%.o: %.cpp
		$(CC) -c $(CPPFLAGS) -o $@ $<

clean:
		rm -rf *.o

fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: clean fclean re%