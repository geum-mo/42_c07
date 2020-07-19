/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:01:09 by gekang            #+#    #+#             */
/*   Updated: 2020/07/19 09:20:36 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_get_len(char *str)
{
	int		i;
	int		len;

	i = 0 - 1;
	while (str[++i])
		len = i;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_get_len(src);
	if (!(dest = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0 - 1;
	while (++i < len)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
