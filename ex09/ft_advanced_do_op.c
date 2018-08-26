/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:36:31 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 18:41:53 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_advanced_do_opp.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	a = -1;
	b = 0;
	ft_putstr("error : only [ ");
	while (++a < 5)
	{
		ft_putstr(g_opptab[a]);
		ft_putchar(' ');
	}
	ft_putstr("] are accepted.\n");
	return (b);
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc == 4)
	{
		i = -1;
		while (++i < 5)
			if (ft_strcmp(g_opptab[i].op, argv[2]) == 0)
			{
				if (ft_atoi(argv[3]) == 0 && (i == 3 || i == 4))
				{
					if (i == 3)
						ft_putstr("Stop : division by zero\n");
					else
						ft_putstr("Stop : modulo by zero\n");
				}
				else
				{
					ft_putnbr(g_opptab[i].f(ft_atoi(argv[1]),
								ft_atoi(argv[3])));
					ft_putchar('\n');
				}
			}
		return ((i == 5) ? g_opptab[i].f(0, 0) : 0);
	}
	return (0);
}
