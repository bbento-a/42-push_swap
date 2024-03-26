# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:19:45 by bbento-a          #+#    #+#              #
#    Updated: 2024/03/25 14:41:15 by bbento-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = push_swap.h\
		main.c\

CC = cc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)
$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean: $(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
