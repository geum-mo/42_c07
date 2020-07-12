#include <stdio.h>

int				ft_ultimate_range(int **range, int min, int max);

int				main(void)
{
	int			arr[3] = {1, 2, 3};
	int			i;

	printf("%d\n", ft_ultimate_range(arr, -5, -1));
	return (0);
}
