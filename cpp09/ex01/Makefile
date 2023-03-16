SRCS = main.cpp RPN.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

# CFLAGS = -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

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
	./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"

v : re
	clear
	valgrind ./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"

.PHONY: all fclean clean re