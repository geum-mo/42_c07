#include <stdio.h>

int				*ft_range(int min, int max);

int				main(void)
{
	int			*arr;
	int			i;

	printf("%s\n", "check5");
	arr = ft_range(-5, -1);
	i = 0;
	while (i < 5)
	{
		printf("%s\n", "check6");
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
