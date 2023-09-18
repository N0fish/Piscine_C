# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: algultse <algultse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 17:36:52 by algultse          #+#    #+#              #
#    Updated: 2023/07/20 18:19:22 by algultse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

all: libft.a

%.o: %.c
        gcc -Wall -Wextra -Werror -c $*.c -I./includes/ -o $*.o

libft.a : $(OBJS)
        ar rc libft.a $(OBJS)

clean :
        rm -rf $(OBJS)

fclean : clean
        rm -rf libft.a

re : fclean all

.PHONY: all clean re
