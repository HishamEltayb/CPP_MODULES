# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/10/20 12:20:05 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CXXFLAGS = -Wall -Werror -Wextra
CXX = c++

#comment me
# ADDITIONAL_FLAGS = -g3 -std=c++98
# CXXFLAGS += $(ADDITIONAL_FLAGS)
#comment me
# SANITAIZE_FLAG = -fsanitize=address
# CXXFLAGS += $(SANITAIZE_FLAG)


SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS_ALL	:=	$(shell find $(SRCDIR) -type f)
SRCS		:=	$(filter-out %.tpp, $(SRCS_ALL))

OBJS		:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(filter %.cpp, $(SRCS)))

INCLUDE = -I ./includes/

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

fclean:
	@make clean
	@rm -rf $(NAME)

valgrind: $(NAME) 
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

re:
	@make fclean
	@make all

.PHONY: all re clean fclean