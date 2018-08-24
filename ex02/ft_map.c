/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:55:58 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/24 16:09:50 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*newtab;

	newtab = malloc(length * sizeof(int));
	i = -1;
	while (++i < length)
		newtab[i] = f(tab[i]);
	return (newtab);
}
