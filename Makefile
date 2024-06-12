# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 10:58:05 by joaoped2          #+#    #+#              #
#    Updated: 2023/04/11 13:23:25 by joaoped2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
NAMEB	= checker
CC		= clang
CFLAGS 	= -Wall -Wextra -Werror -g
SRC		= src/main.c\
		  src/check_index.c\
		  src/check_postarget.c\
		  src/check_size.c\
		  src/check_values.c\
		  src/duplicates.c\
		  src/error.c\
		  src/init_stack.c\
		  src/reverse_rotate.c\
		  src/rotate.c\
		  src/numcheck.c\
		  src/rotatenreverserotutils.c\
		  src/opshifting.c\
		  src/swap.c\
		  src/swap2.c\
		  src/utils.c

SRCB	= bonus/main_bonus.c\
		  bonus/check_index_bonus.c\
		  bonus/check_postarget_bonus.c\
		  bonus/check_size_bonus.c\
		  bonus/check_values_bonus.c\
		  bonus/duplicates_bonus.c\
		  bonus/error_bonus.c\
		  bonus/init_stack_bonus.c\
		  bonus/reverse_rotate_bonus.c\
		  bonus/rotate_bonus.c\
		  bonus/numcheck_bonus.c\
		  bonus/rotatenreverserotutils_bonus.c\
		  bonus/opshifting_bonus.c\
		  bonus/swap_bonus.c\
		  bonus/swap2_bonus.c\
		  bonus/utils_bonus.c\
		  bonus/get_next_line_bonus.c\
		  bonus/get_next_line_utils_bonus.c
OBJ		= $(SRC:.c=.o)
OBJB	= $(SRCB:.c=.o)
GREEN		=	\033[0;32m
RED 		=	\033[0;31m
YELLOW		=	\033[0;33m
RESET		=	\033[0m

all: 	$(OBJ)
		@echo "$(RED)[ .. ]Compiling Mandatory[ .. ]$(RESET)"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)[ OK ]$(RESET)$(YELLOW)Mandatory Ready!$(RESET)$(GREEN)[ OK ]$(RESET)"

bonus:	$(OBJB)
		@echo "$(RED)[ .. ]Compiling Bonus[ .. ]$(RESET)"
		@$(CC) $(CFLAGS) $(OBJB) -o $(NAMEB)
		@echo "$(GREEN)[ OK ]$(RESET)$(YELLOW)Bonus Ready!$(RESET)$(GREEN)[ OK ]$(RESET)"

src/%.o:	src/%.c
			@$(CC) $(CFLAGS) -o $@ -c $<

bonus/%.o:	bonus/%.c
			@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@echo "$(RED)[ .. ]Deleting objects[ .. ]$(RESET)"
	@rm -rf $(OBJ) $(OBJB)
	@echo "$(GREEN)[ OK ]Objects deleted[ OK ]$(RESET)"

fclean: clean
	@echo "$(RED)[ .. ]Deleting Programs[ .. ]$(RESET)"
	@rm -rf $(NAME) $(NAMEB)
	@echo "$(GREEN)[ OK ]Programs deleted[ OK ]$(RESET)"

re: fclean all
reb: fclean bonus
