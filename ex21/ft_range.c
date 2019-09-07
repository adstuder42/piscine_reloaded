/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 19:09:21 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/12 22:43:27 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
		return (0);
	i = max - min;
	if (!(tab = malloc(sizeof(int) * i)))
		return (0);
	i--;
	while (i >= 0)
	{
		tab[i] = max - 1;
		max--;
		i--;
	}
	return (tab);
}
