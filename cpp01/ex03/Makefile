NAME = ex03
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp  HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = HumanB.hpp HumanA.cpp

$(NAME): $(OBJ) HumanA.hpp Weapon.hpp HumanB.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
