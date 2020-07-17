/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:11:21 by gekang            #+#    #+#             */
/*   Updated: 2020/07/17 21:57:53 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	memory_in_need;
	int	index;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	memory_in_need = max - min - 1;
	if (!(arr = malloc(memory_in_need * sizeof(int))))
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	index = 0;
	while (index <= memory_in_need)
	{
		arr[index] = min + index;
		index++;
	}
	return (memory_in_need + 1);
}
