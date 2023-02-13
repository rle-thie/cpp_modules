SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

# CFLAGS = -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Mutant

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