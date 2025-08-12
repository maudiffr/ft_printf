# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maudiffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 10:10:36 by maudiffr          #+#    #+#              #
#    Updated: 2022/12/21 13:29:55 by maudiffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c ft_printnbr.c ft_printu.c ft_printhex.c ft_printp.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	make -C libft
	cp libft/libft.a libftprintf.a
	ar rcs $@ $^

clean : 
	make clean -C libft
	rm -rf *.o

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all
