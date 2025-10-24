# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 11:14:28 by joduarte          #+#    #+#              #
#    Updated: 2025/10/24 19:47:48 by joduarte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_strjoin.c ft_strmapi.c \
	ft_strtrim.c ft_substr.c ft_itoa.c ft_split.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\033[32mLibrary Created: $(NAME)\033[0m"
%.o: %.c
	@$(CC) $(CFLAGS) -I . -c $< -o $@
	
clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mFiles Cleaned\033[0m"

re: fclean all

.PHONY: all clean fclean re

