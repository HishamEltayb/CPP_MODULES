# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/09/27 16:28:25 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

CXXFLAGS = -Wall -Werror -Wextra
CXX = c++

#comment me
# ADDITIONAL_FLAGS = -Wunused -g3 -std=c++98
# CXXFLAGS += $(ADDITIONAL_FLAGS)
#comment me
# SANITAIZE_FLAG = -fsanitize=address
# CXXFLAGS += $(SANITAIZE_FLAG)


SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS	:=	$(shell find $(SRCDIR) -type f)
OBJS	:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

INCLUDE = -I ./includes/
FILE_TO_DELETE  = $(shell find . -type f | grep "_shrubbery")

all: $(NAME)

run: $(NAME)
	@./$(NAME) 

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(INCLUDE) $(CXXFLAGS)  -c $< -o $@

clean: 
	@rm -rf $(OBJDIR)
	@rm -rf $(FILE_TO_DELETE)


fclean:
	@make clean
	@rm -rf $(NAME)

valgrind: $(NAME) 
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

re:
	@make fclean
	@make all

.PHONY: all re clean fclean