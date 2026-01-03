# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 14:46:36 by oishchen          #+#    #+#              #
#    Updated: 2025/12/22 18:37:03 by oishchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone
CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++17

SRC_DIR := src
OBJ_DIR := obj

SRC_FILES := main.cpp

SRC := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))


all: $(NAME)

$(NAME): $(OBJ)
    $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
    @mkdir -p $(OBJ_DIR)
    $(CXX) $(CXXFLAGS) -c -o $@ $<

clean: 
    rm -rf $(OBJ_DIR)

fclean: clean
    rm -rf $(NAME)

re: fclean all

.PHONY: re all fclean clean
