SRCS = main.cpp PmergeMe.cpp

INC = PmergeMe.hpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
#sort test with -std=c++17

NAME = PmergeMe

%.o:        %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:        $(NAME)

$(NAME):    $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

test : $(NAME)
	./$(NAME) `shuf -i 1-100000 -n 3000 | tr "\n" " "`

ree : re
	clear
	./$(NAME) `shuf -i 1-100000 -n 3000 | tr "\n" " "` 

v : re
	clear
	valgrind ./$(NAME) `shuf -i 1-100000 -n 3000 | tr "\n" " "`

.PHONY: all fclean clean re