/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:11:21 by gekang            #+#    #+#             */
/*   Updated: 2020/07/12 22:26:10 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_ultimate_range(int **range, int min, int max)
{
	unsigned	size;
	unsigned	i;

	range = NULL;
	if (min >= max)
		return (0);
	size = max - min;
	range = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		range[i] = max - i;
		i++;
	}
	return (size);

	int	ft_ultimate_range(int **range, int min, int max)
{
	int	*table;
	int	i;

	if (min >= max)
		return (0);
	table = (int*)malloc((max - min) * sizeof(int));
	if (table == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		table[i] = min++;
		i++;
	}
	*range = table;
	return (i);
}
}