SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

# CFLAGS = -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror -std=c++98
# CFLAGS = -std=c++98

NAME = animal

%.o:		%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

ree : re
	clear
	./$(NAME)

v : re
	clear
	valgrind ./$(NAME)

.PHONY: all fclean clean re