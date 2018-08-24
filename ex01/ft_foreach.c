/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:41:15 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/24 13:53:00 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		sign;

	sign = 1;
	if (nb < 0)
		sign = -1;
	if (nb < 10 && nb > -10)
	{
		if (sign == -1)
			ft_putchar('-');
	}
	else
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) * sign + '0');
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

int		main(void)
{
	int truc[] = {1,2,3,4,5,6,7,8,9};
	ft_foreach(truc, 9, &ft_putnbr);
	return (0);
}
