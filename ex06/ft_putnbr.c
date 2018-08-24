/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:39:57 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/24 16:34:48 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, c);
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
