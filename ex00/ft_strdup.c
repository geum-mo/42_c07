/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:01:09 by gekang            #+#    #+#             */
/*   Updated: 2020/07/12 21:36:57 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int			ft_get_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	len = ft_get_len(src);
	ptr = malloc(len * sizeof(char));
	i = 0;
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}

int			main(void)
{
	char	*ptr;
	char	*ptr2;

	ptr = strdup("string");
	printf("%c\n", ptr[0]);
	printf("%c\n", ptr[1]);
	printf("%c\n", ptr[2]);
	printf("%c\n", ptr[3]);
	printf("%c\n", ptr[4]);
	printf("%c\n", ptr[5]);

	ptr2 = ft_strdup("string");
	printf("%c\n", ptr2[0]);
	printf("%c\n", ptr2[1]);
	printf("%c\n", ptr2[2]);
	printf("%c\n", ptr2[3]);
	printf("%c\n", ptr2[4]);
	printf("%c\n", ptr2[5]);
}
