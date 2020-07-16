/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:15:46 by gekang            #+#    #+#             */
/*   Updated: 2020/07/16 21:28:13 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_get_len(char *str)
{
	int		i;

	while (str[i] != 0)
		i++;
	return (i);
}

void		print_strs(char **strs, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			printf("%c", strs[i][j++]);
		i++;
	}
}

int			*ft_get_sep_index(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int 	*arr;

	if (!(arr = (int*)malloc(ft_get_len(str) * sizeof(int))))
		return (0);
	i = 0;
	k = 0;
	while (*str)
	{
		j = 0;
		while (*charset)
		{
			if (str[i] == charset[j++])
			{
				arr[k] = i;
				k++;
				continue ;
			}
		}
		i++;
	}
	return (arr);
}

char		**ft_split(char *str, char *charset)
{
	char	**strs;
	int 	*arr;
	int		size;
	int		i;

	arr = ft_get_sep_index(str, charset);
	printf("%s", "check2");
	i = 0;
	// if (!(strs = malloc(size * sizeof(char *))))
	// 	return (0);
	return (0);
}

int			main()
{
	printf("%s", "check1");
	char	str[100] = "aaaaa||bbbbb-ccccc.-ddddd";
	char	charset[100] = "|-.";

	printf("%s", str);
	printf("%s", charset);
	ft_split(str, charset);
	return (0);
}
