# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 14:14:35 by dabeloos          #+#    #+#              #
#    Updated: 2018/08/26 17:56:16 by dabeloos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_advanced_do-op

C_FILES		= ft_advanced_do_op.c ft_operators.c ft_string_utils.c

FLAGS		= -Wall -Wextra -Werror

$(NAME):
			gcc -o $(NAME) $(FLAGS) $(C_FILES)

all:		$(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all
