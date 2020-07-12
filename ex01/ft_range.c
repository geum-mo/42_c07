/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:37:37 by gekang            #+#    #+#             */
/*   Updated: 2020/07/12 22:07:32 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int					*ft_range(int min, int max)
{
	unsigned		size;
	int				*arr;
	unsigned int	i;

	arr = NULL;
	printf("%s\n", "check1");
	if (min >= max)
		return (arr);
	size = max - min;
	printf("%s\n", "check2");
	arr = malloc(size * sizeof(int));
	i = 0;
	printf("%s\n", "check3");
	while (i < size)
	{
		arr[i] = max - i;
		printf("%s\n", "check4");
		i++;
	}
	return (arr);
}
