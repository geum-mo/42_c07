/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:53:17 by gekang            #+#    #+#             */
/*   Updated: 2020/07/16 14:15:37 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_get_len(char *str)
{
	int i;
	while (str[i] != 0)
		i++;
	return (i);
}

int ft_get_output_len(int size, char **strs, int sep_len)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			count++;
		}
		i++;
	}
	count = count + (sep_len * size - 1);
	return (count);
}

char *ft_fill_output(char *output, int len, int size, char **strs, char* sep)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < size)
		{
			k = 0;
			while (strs[j][k] != '\0')
				output[i++] = strs[j][k++];
			l = 0;
			if (j == size - 1)
				break ;
			while (sep[l] != '\0')
				output[i++] = sep[l++];
			j++;
		}
		i++;
	}
	return (output);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	int sep_len;
	int output_len;
	char *output;

	if (!size)
		return (output = "");
	i = 0;
	j = 0;
	sep_len = ft_get_len(sep);
	output_len = ft_get_output_len(size, strs, sep_len);
	if (!(output = malloc(output_len * sizeof(char))))
		return (0);
	return (ft_fill_output(output, output_len, size, strs, sep));
}

int main(void)
{
	int size = 4;
	char *sep = "||";
	char *str1 = "aaaaa";
	char *str2 = "bbbbb";
	char *str3 = "ccccc";
	char *str4 = "ddddd";
	char **strs;
	int i;

	if (!(strs = malloc(4 * sizeof(str1))))
		return (0);
	i = 0;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	// printf("%s\n", strs[0]);
	// printf("%s\n", strs[1]);
	// printf("%s\n", strs[2]);
	// printf("%s\n", strs[3]);
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}
