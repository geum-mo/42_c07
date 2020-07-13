/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:53:17 by gekang            #+#    #+#             */
/*   Updated: 2020/07/13 18:27:10 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_getlen(char *str)
{
	int i;
	while (str[i] != 0)
		i++;
	return (i);
}

char *ft_create_result(char *buffer, int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		if (i != 0 || i != size - 1)
		{
			l = 0;
			while (sep[l] != '\0')
			{
				buffer[k] = sep[l];
				l++;
				k++;
			}
		}
		else
		{
			while (strs[i][j] != '\0')
			{
				buffer[k] =  strs[i][j];
				j++;
				k++;
			}
		}
		i++;
	}
	return (buffer);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int str_len;
	int sep_len;
	int buffer_len;
	char *buffer;
	char *result;

	i = 0;
	printf("%s\n", "check");
	while (i < size)
	{
		str_len += ft_getlen(strs[i]);
		i++;
	}
	sep_len = ft_getlen(sep);
	buffer_len = str_len + sep_len * (size - 2);
	buffer = malloc(buffer_len * sizeof(char));
	//printf("%s\n", "check1");
	result = ft_create_result(buffer, size, strs, sep);
	//printf("%s\n", "check2");
	return (result);
}

int main(void)
{
	int size;
	char *sep = "||";
	char *str1 = "aaaaa";
	char *str2 = "bbbbb";
	char *str3 = "ccccc";
	char *str4 = "ddddd";
	char **strs;

	strs = (char**)malloc(4 * 5 * sizeof(char));
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str4;
	printf("%s\n", "check");
	printf("%s\n", strs[0]);
	printf("%s\n", strs[1]);
	printf("%s\n", strs[2]);
	printf("%s\n", strs[3]);
	printf("%s\n", strs[4]);
	printf("%s\n", ft_strjoin(size, strs, sep));
}
