# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/09 11:33:40 by recarras          #+#    #+#              #
#    Updated: 2017/07/09 12:46:33 by recarras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:
.SUFFIXES:

NAME=libft.a

SRC_DIR=srcs/
INC_DIR=includes/

SRCS=\
	 ft_putchar.c\
	 ft_putstr.c\
	 ft_strcmp.c\
	 ft_strlen.c\
	 ft_swap.c

OBJ=$(SRC:.c=.o)

CC=gcc
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -I $(INC_DIR) $(CFLAGS) $(SRC)
	@$(AR) $(NAME) $(OBJ)

clean:
	@bin/rm -f $(OBJ)

fclean: clean
	@bin/rm -f $(NAME)

re: fclean all
