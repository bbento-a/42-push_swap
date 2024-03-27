# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:19:45 by bbento-a          #+#    #+#              #
#    Updated: 2024/03/27 11:49:58 by bbento-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = $(addprefix src/, $(SRCS_FILES))
SRCS_FILES = push_swap.h\
			 main.c\

OBJS = 
OBJS_FILES =

LIBFT = $(LIBFT_PATH)/libft.a
LIBFT_PATH = ./libft

CC = cc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT_PATH = ./libft

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(LIBFT)
	make -C $(LIBFT_PATH) all


clean: $(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
