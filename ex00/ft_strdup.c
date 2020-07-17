/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:01:09 by gekang            #+#    #+#             */
/*   Updated: 2020/07/18 00:03:12 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
