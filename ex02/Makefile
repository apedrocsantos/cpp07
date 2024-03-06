CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wno-conversion -std=c++98

NAME = array

FILES =	

SRCS =	$(FILES:=.cpp) main.cpp

HEADERS =	Array.hpp

all: $(NAME)

$(NAME) : $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME) -g

clean:

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re