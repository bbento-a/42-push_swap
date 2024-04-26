# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:19:45 by bbento-a          #+#    #+#              #
#    Updated: 2024/04/23 23:37:32 by bbento-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= push_swap

# Directories
LIBFT				= ./libft/libft.a
INC					= inc/
SRC_DIR				= src/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= cc
CFLAGS				= -g -I #-Wall -Werror -Wextra  
RM					= rm -f

# Source Files

PUSH_SWAP_DIR		=	$(SRC_DIR)error_checker.c \
						$(SRC_DIR)free_mem.c \
						$(SRC_DIR)main_ps.c \
						$(SRC_DIR)moves_push.c \
						$(SRC_DIR)moves_reverserotate.c \
						$(SRC_DIR)moves_rotate.c \
						$(SRC_DIR)moves_swap.c \
						$(SRC_DIR)sort_main.c \
						$(SRC_DIR)sort_small.c \
						$(SRC_DIR)sort_values.c \
						$(SRC_DIR)split.c \
						$(SRC_DIR)stack_start.c \
						$(SRC_DIR)stack_utils.c \

# Concatenate all source files
SRCS 				=  $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re

