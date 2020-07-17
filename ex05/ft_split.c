/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:15:46 by gekang            #+#    #+#             */
/*   Updated: 2020/07/17 10:06:58 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			ft_is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_getsize(char *str, char *charset)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (str[i] && !ft_is_charset(str[i], charset))
	{
		i++;
		count++;
	}
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) && str[i + 1]
				&& !ft_is_charset(str[i + 1], charset))
			count++;
		i++;
	}
	return (count);
}

char			*ft_strncpy(char *str, unsigned int n)
{
	unsigned int	i;
	char			*arr;

	arr = (char *)malloc(sizeof(char) * (n + 1));
	arr[n] = 0;
	i = 0;
	while (i < n)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}

void			ft_fill_strs(char *str, char *charset, char **result)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 1;
	count = 0;
	if (str[i] && !ft_is_charset(str[i], charset))
		j = i++;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset))
		{
			if (j < i)
				result[count++] = ft_strncpy(str + j, i - j);
			j = i + 1;
		}
		i++;
	}
	if (j < i)
		result[count] = ft_strncpy(str + j, i - j);
}

char			**ft_split(char *str, char *charset)
{
	unsigned int	count;
	char			**arr;
	unsigned int	len;

	if (!charset[0])
	{
		arr = (char **)malloc(sizeof(char *) * 2);
		len = 0;
		while (str[len])
			len++;
		arr[0] = ft_strncpy(str, len);
		arr[1] = 0;
		return (arr);
	}
	count = ft_getsize(str, charset);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	arr[count] = 0;
	ft_fill_strs(str, charset, arr);
	return (arr);
}
