# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 14:48:22 by bbento-a          #+#    #+#              #
#    Updated: 2024/04/23 17:15:02 by bbento-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_strlcpy.c ft_isalnum.c ft_isascii.c\
	  ft_memset.c ft_isprint.c ft_memset.c ft_tolower.c ft_toupper.c\
	  ft_strlen.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_strlcat.c\
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c\
	  ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_putchar_fd.c\
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_substr.c\
	  ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c\
	  ft_printf.c ft_printf_c.c ft_printf_p.c ft_printf_s.c ft_putnbr_base.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SRC:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -fPIC


all: $(NAME)

$(NAME): $(OBJECTS)
		@ar rcs $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJECTS)
		@ar rcs  $(NAME) $(BONUS_OBJECTS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re
