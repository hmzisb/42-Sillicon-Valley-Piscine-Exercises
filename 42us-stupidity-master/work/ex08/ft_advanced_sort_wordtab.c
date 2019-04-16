/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:55:51 by haahmed           #+#    #+#             */
/*   Updated: 2019/04/09 21:55:54 by haahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		index;
	int		i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && (*cmp)(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			++index;
		}
		++i;
	}
}
