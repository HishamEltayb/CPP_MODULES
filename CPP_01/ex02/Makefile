# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/08/26 21:09:01 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++

#delete me
ADDITIONAL_FLAGS = -Wunused  -fsanitize=address -g3
CXXFLAGS += $(ADDITIONAL_FLAGS)

SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS	:=	$(shell find $(SRCDIR) -type f)
OBJS	:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

INCLUDE = -I ./includes/

all: $(NAME)

run: $(NAME)
	@./$(NAME) > mylog

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

re:
	@make fclean
	@make all

.PHONY: all re clean fclean