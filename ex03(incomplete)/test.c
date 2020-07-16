/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:53:17 by gekang            #+#    #+#             */
/*   Updated: 2020/07/15 19:58:43 by gekang           ###   ########.fr       */
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

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *output;

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
	printf("%s\n", strs[0]);
	printf("%s\n", strs[1]);
	printf("%s\n", strs[2]);
	printf("%s\n", strs[3]);
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}
