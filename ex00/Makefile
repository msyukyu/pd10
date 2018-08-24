# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/24 09:39:11 by dabeloos          #+#    #+#              #
#    Updated: 2018/08/24 11:21:16 by dabeloos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

H_FOLDER	= includes

C_FILES		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
				srcs/ft_strlen.c srcs/ft_swap.c

O_FILES		= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

$(NAME):
			gcc -c -Wall -Werror -Wextra $(C_FILES) -I/$(H_FOLDER)
			ar -rcs $(NAME) $(O_FILES)

all:		$(NAME)

clean:
			rm -f $(O_FILES)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
