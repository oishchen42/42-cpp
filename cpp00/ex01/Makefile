# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 18:31:30 by oishchen          #+#    #+#              #
#    Updated: 2026/01/03 11:00:35 by oishchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook
CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++17
INCLUDE := include

SRC_DIR := src
SRC_FILES := main.cpp contact.cpp phone_book.cpp
SRC := $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR := obj
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(CXXFLAGS) -I$(INCLUDE) $(OBJ) -o $(NAME)
	@if [ -f $(NAME) ]; then \
		echo "$(GREEN)The binary created successfully$(NEW)"; \
		echo "----------------------------------------"; \
	else \
		echo "$(RED) An error occured$(NEW)"; \
	fi

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -I$(INCLUDE) -c $< -o $@ 

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(BLUE) $(OBJ_DIR) was deleted $(NEW)"


fclean: clean
	@rm -rf $(NAME)
	@echo "$(BLUE) $(NAME) was deleted $(NEW)"

re: fclean all

.PHONY: all clean fclean re

# Decor
GREEN = \033[0;32m
RED = \033[0;31m
NEW = \033[0m
BLUE = \033[94m
