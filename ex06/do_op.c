/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:36:31 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 15:28:16 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_tab_init(int (*f[5])(int, int))
{
	*f[0] = &ft_add;
	*f[1] = &ft_sub;
	*f[2] = &ft_mul;
	*f[3] = &ft_div;
	*f[4] = &ft_mod;
}

int		main(int argc, char *argv[])
{
	int		(*f[5])(int, int);

	ft_tab_init(&f);
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			ft_putnbr((f[0])(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '-')
			ft_putnbr(f[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '*')
			ft_putnbr(f[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else if (argv[2][0] == '/')
			ft_putnbr(f[3](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '%')
			ft_putnbr(f[4](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
