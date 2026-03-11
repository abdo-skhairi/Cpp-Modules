NAME = ex01
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Cat.cpp Animal.cpp Dog.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Cat.hpp Animal.hpp Dog.hpp Brain.hpp

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)