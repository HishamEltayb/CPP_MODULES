# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/09/05 12:43:32 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CXXFLAGS = -Wall -Werror -Wextra
CXX = c++

#delete me
# ADDITIONAL_FLAGS = -Wunused  -fsanitize=address -g3 -std=c++98 -Wimplicit-fallthrough=0
# CXXFLAGS += $(ADDITIONAL_FLAGS)

SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS	:=	$(shell find $(SRCDIR) -type f)
OBJS	:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

INCLUDE = -I ./includes/

all: $(NAME)

run: $(NAME)
	@-./$(NAME) "WARNING"

$(NAME): $(OBJS)
	@-$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@-mkdir -p $(dir $@)
	@-$(CXX) $(INCLUDE) $(CXXFLAGS)  -c $< -o $@

clean: 
	@-rm -rf $(OBJDIR)

fclean:
	@-make clean
	@-rm -rf $(NAME)

valgrind: $(NAME) 
	@-valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) "DEBUG"
re:
	@-make fclean
	@-make all

.PHONY: all re clean fclean