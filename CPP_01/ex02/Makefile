# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/09/04 18:33:19 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AddressManipulation

CXXFLAGS = -Wall -Werror -Wextra 
CXX = c++

#delete me
# ADDITIONAL_FLAGS = -Wunused  -fsanitize=address -g3 -std=c++98
# CXXFLAGS += $(ADDITIONAL_FLAGS)

SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS	:=	$(shell find $(SRCDIR) -type f)
OBJS	:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))


all: $(NAME)

run: $(NAME)
	@./$(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS)  -c $< -o $@
	
clean: 
	@rm -rf $(OBJDIR)

fclean:
	@make clean
	@rm -rf $(NAME)

re:
	@make fclean
	@make all

.PHONY: all re clean fclean