/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:31:55 by haahmed           #+#    #+#             */
/*   Updated: 2019/04/09 21:32:00 by haahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		++i;
	}
	return (result);
}
