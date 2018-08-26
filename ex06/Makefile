# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 14:14:35 by dabeloos          #+#    #+#              #
#    Updated: 2018/08/26 14:45:07 by dabeloos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= do-op

C_FILES		= do_op.c ft_operators.c ft_string_utils.c

O_FILES		= do_op.o ft_operators.o ft_string_utils.o

FLAGS		= -Wall -Wextra -Werror

$(NAME):
			gcc -o $(NAME) $(FLAGS) $(C_FILES)

all:		$(NAME)

clean:
			rm -f $(O_FILES)

fclean:		clean
			rm -f $(NAME)

re:			flcean all
