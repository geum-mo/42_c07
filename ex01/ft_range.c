/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:37:37 by gekang            #+#    #+#             */
/*   Updated: 2020/07/17 22:06:07 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					*ft_range(int min, int max)
{
	unsigned		size;
	int				*arr;
	unsigned int	i;

	arr = NULL;
	if (min >= max)
		return (arr);
	size = max - min;
	if (!(arr = (int *)malloc(size * sizeof(int))))
		return (0);
	i = 0;
	while (i < size)
	{
		arr[i] = max - (size - i);
		i++;
	}
	return (arr);
}
