# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 11:14:28 by joduarte          #+#    #+#              #
#    Updated: 2025/11/05 14:37:53 by joduarte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .
AR = ar rcs

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_strjoin.c ft_strmapi.c \
	ft_strtrim.c ft_substr.c ft_itoa.c ft_split.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c


SRC_OBJS = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	ft_lstclear.c ft_lstiter.c ft_lstmap.c


BONUS_OBJS = $(BONUS:.c=.o)
	

all: $(NAME)

$(NAME): $(SRC_OBJS)
	@$(AR) $(NAME) $(SRC_OBJS)
	@echo "\033[32mLibrary Created: $(NAME)\033[0m"
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	
bonus:	$(SRC_OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(BONUS_OBJS)
	@echo "\033[32mBonus files added to: $(NAME)\033[0m"
clean:
	@rm -f $(SRC_OBJS) $(BONUS_OBJS)
	@echo "\033[32mCleaning...\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mFiles Cleaned\033[0m"

re: fclean all

.PHONY: all clean fclean re

