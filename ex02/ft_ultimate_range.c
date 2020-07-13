/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:11:21 by gekang            #+#    #+#             */
/*   Updated: 2020/07/13 16:51:15 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	memory_in_need;
	int	index;
	int	*arr;

	if (min >= max)
	{
		*range = 0; // creates a null pointer
		return (0);
	}
	printf("%s\n", "check1");
	memory_in_need = max - min - 1; // because max should be excluded
	if ((arr = malloc(memory_in_need * sizeof(int))) == NULL) // indicates no memory is allocated
	{
		*range = 0; // creates a null pointer
		return (-1);
	}
	printf("%s\n", "check2");
	arr = malloc(memory_in_need * sizeof(int));
	*range = arr;  //if the double pointer is just declared but defined, it raises bus error
	printf("%s\n", "check3");

	index = 0;
	while (index <= memory_in_need)
	{
		arr[index] = min + index;
		index++;
	}
	return (memory_in_need + 1);
}

int main(void)
{
	int double_pointer[10][10]; //if the double pointer is just declared but defined, it raises bus error
	printf("%d\n", ft_ultimate_range(double_pointer, 3, 5));
}
