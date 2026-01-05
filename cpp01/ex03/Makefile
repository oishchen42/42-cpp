NAME := this

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SRC := main.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ/%.o) : $(SRC/%.cpp)
	$(CXX) $(CXXFLAGS) -c $@ -o $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: make fclean clean re