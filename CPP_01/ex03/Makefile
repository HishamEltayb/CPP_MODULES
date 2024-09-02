# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/09/01 19:19:31 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HumansWeapons

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 
CXX = c++

#delete me
ADDITIONAL_FLAGS = -Wunused  -fsanitize=address -g3
CXXFLAGS += $(ADDITIONAL_FLAGS)

SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS	:=	$(shell find $(SRCDIR) -type f)
OBJS	:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

INCLUDE = ./includes/
HEADERS := $(shell find $(INCLUDE) -type f)

all: $(NAME)

run: $(NAME)
	@./$(NAME) 

$(NAME): $(OBJS) $(HEADERS)
	@$(CXX) $(CXXFLAGS) -I $(INCLUDE) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) -I $(INCLUDE) $(CXXFLAGS)  -c $< -o $@
clean: 
	@rm -rf $(OBJDIR)

fclean:
	@make clean
	@rm -rf $(NAME)

valgrind: $(NAME) 
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
re:
	@make fclean
	@make all

.PHONY: all re clean fclean