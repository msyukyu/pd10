/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:24:33 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 17:34:21 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2)
{
	int i;
	int cmp;

	i = 0;
	cmp = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}
	return ((cmp == 0) ? s1[i] - s2[i] : cmp);
}

void    ft_sort_wordtab(char **tab)
{
	int     i;
	int     j;
	char    *str;

	i = 0;
	while (tab[i] != (void*)0)
		i++;
	j = i;
	while (j > 0)
	{
		i = 0;
		while (i < j - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				str = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = str;
			}
			i++;
		}
		j--;
	}
}
