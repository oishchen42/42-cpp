NAME := zombie
FLAGS := -Wall -Wextra -Werror -std=c++17

INCLUDE := ./include
SRC_DIR := src
OBJ_DIR := obj

SRC_FILES := Zombie.cpp main.cpp
SRC := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) -I$(INCLUDE) $(OBJ) -o $(NAME)
	@if [ -f $(NAME) ]; then \
		echo "$(GREEN)The binary created successfully$(NEW)"; \
		echo "----------------------------------------"; \
	else \
		echo "$(RED) An error occured$(NEW)"; \
	fi

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(FLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(BLUE) $(OBJ_DIR) was deleted $(NEW)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(BLUE) $(NAME) was deleted $(NEW)"

re: fclean all

print-%:
	@echo $* = $($*)
# Decor
GREEN = \033[0;32m
RED = \033[0;31m
NEW = \033[0m
BLUE = \033[94m
