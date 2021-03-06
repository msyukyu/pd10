/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:22:17 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 14:12:09 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	if (length > 1)
	{
		i = 0;
		while (i + 1 < length)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				break ;
			i++;
		}
		if (i + 1 == length)
			return (1);
		i = 0;
		while (i + 1 < length)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
