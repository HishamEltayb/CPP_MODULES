# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 11:08:13 by heltayb           #+#    #+#              #
#    Updated: 2024/10/20 12:20:09 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


RED 				 = "\033[0;31m"
WHITE 				 = "\033[0;37m"
GREEN 				 = "\033[0;32m"
BLUE 				 = "\033[0;34m"
CYAN 				 = "\033[0;36m"
YELLOW 				 = "\033[0;33m"
BOLD 				 = "\033[1m"
RESET 				 = "\033[0m"


NAME = RPN
CXXFLAGS = -Wall -Werror -Wextra
CXX = c++

#comment me
ADDITIONAL_FLAGS = -std=c++98 -g3
CXXFLAGS += $(ADDITIONAL_FLAGS)
#comment me
SANITAIZE_FLAG = -fsanitize=address  
CXXFLAGS += $(SANITAIZE_FLAG)

SRCDIR	=	srcs
OBJDIR	=	objs
 
SRCS	:=	$(shell find $(SRCDIR) -type f)

OBJS		:=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

INCLUDE = -I ./includes/
HEADERS 	:= $(shell find includes -type f)

all: $(NAME)
	@echo $(GREEN)$(BOLD)"Compilation done"$(RESET) ✅
	@echo $(YELLOW)$(BOLD)"[./$(NAME) "5 4 * 3 + 2"] OR [make run] OR [make valgrind]"$(RESET)


run: $(NAME)
	@./$(NAME) "5 4 * 3 + 2"

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@$(CXX) $(INCLUDE) $(CXXFLAGS)  -c $< -o $@

clean: 
	@rm -rf $(OBJDIR)

fclean:
	@make clean
	@rm -rf $(NAME)

valgrind: $(NAME) 
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) "5 4 * 3 + 2"

re:
	@make fclean
	@make all

.PHONY: all re clean fclean