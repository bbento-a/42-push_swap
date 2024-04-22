# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:19:45 by bbento-a          #+#    #+#              #
#    Updated: 2024/04/22 18:58:56 by bbento-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS_FILES = main_ps.c \
			 error_checker.c\
			 free_mem.c\
			 moves_push.c\
			 moves_reverserotate.c\
			 moves_rotate.c\
			 moves_swap.c\
			 sort_main.c\
			 sort_small.c\
			 sort_values.c\
			 split.c\
			 stack_start.c\
			 stack_utils.c\

SRCS = $(addprefix src/, $(SRCS_FILES))

OBJS_DIR = obj/
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:src/%.c=%.o))

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
CCFLAGS = -Wall -Wextra -Werror -I
RM = rm -f


all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
		$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	mkdir -p $(OBJS_DIR)
	$(CC) $(CCFLAGS) $(SRCS) -c

$(LIBFT) :
	make -C $(LIBFT_PATH) all


clean: $(RM) *.o

fclean: clean
		$(RM) $(NAME)
		rmdir $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re
