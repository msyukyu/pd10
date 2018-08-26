/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:24:33 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 17:38:40 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (tab[i] != (void*)0)
		i++;
	j = i;
	while (j > 0)
	{
		i = 0;
		while (i < j - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
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
