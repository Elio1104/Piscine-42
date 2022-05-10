# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alondot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 13:29:20 by alondot           #+#    #+#              #
#    Updated: 2021/11/24 15:02:02 by alondot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS_P = ./srcs/
HEADER = ./includes/
SRCS = $(SRCS_P)ft_putchar.c $(SRCS_P)ft_swap.c $(SRCS_P)ft_putstr.c $(SRCS_P)ft_strlen.c $(SRCS_P)ft_strcmp.c
OBJ = $(SRCS:.c = .o)
AR = ar
ARFLAGS = rc

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $*.c -I$(HEADER) -o $*.o

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean re
