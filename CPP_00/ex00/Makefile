# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/08/11 11:47:10 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXXFLAGS = -Wall -Werror -Wextra 
CXX = c++

#delete me
ADDITINAL_FLAGS = -Wunused  -fsanitize=address -g3
CXXFLAGS += $(ADDITINAL_FLAGS)

SRCDIR	=	src
OBJDIR	=	obj
 
SRCS	=	$(shell find $(SRCDIR) -type f)
OBJS	=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

INCLUDE = -I  ./includes/

all: $(NAME)
	@./$(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(INCLUDE) $(CXXFLAGS)  -c $< -o $@
	
clean: 
	@rm -rf $(OBJDIR)

fclean:
	make clean
	rm -rf $(NAME)

re:
	make fclean
	make all

.PHONY: all re clean fclean