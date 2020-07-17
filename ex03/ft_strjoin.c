/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:53:17 by gekang            #+#    #+#             */
/*   Updated: 2020/07/18 00:01:29 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_get_total_len(char **strs, int size)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		result += ft_get_len(strs[i++]);
	}
	return (result);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;

	if (size <= 0 || !sep || !strs)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	len = ft_get_len(sep) * (size - 1) + ft_get_total_len(strs, size) + 1;
	result = malloc(sizeof(char) * len);
	if (!result)
		return (0);
	result[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i++]);
		if (i < size)
			ft_strcat(result, sep);
	}
	result[len - 1] = '\0';
	return (result);
}
