# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:19:45 by bbento-a          #+#    #+#              #
#    Updated: 2024/03/28 16:01:10 by bbento-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS_FILES = main_ps.c\
			 moves_push.c

SRCS = $(addprefix src/, $(SRCS_FILES))

OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:src/%.c=%.o))

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f


all: $(NAME)

$(NAME) : $(OBJS)
	mkdir -p $(OBJS_DIR)
	$(CC) $(CCFLAGS) $(SRCS) -o $@

$(LIBFT) :
	make -C $(LIBFT_PATH) all


clean: $(RM) *.o

fclean: clean
		$(RM) $(NAME)
		rmdir $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re
