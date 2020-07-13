#include <stdio.h>

int				main(void)
{
	int			arr1[3];
	int			*arr2;
	int			arr3[3] = {1, 2, 3};
	int			i;

	i = 0;
	while (i < 3)
	{
		printf("%s\n", "check1");
		arr1[i] = i;
		i++;
	}
	i = 0;
	//while (i < 3)
	//{
	//	printf("%s\n", "check2");
	//	arr2[i] = i; // Memory was not allocated to this array so it raises seg fault
	//	i++;
	//}

	//let's allocated memory to this array

	while (i < 3)
	{
		printf("%s\n", "check3");
		arr3[i] = i;
		i++;
	}
	printf("%d, %d, %d\n", arr1[0], arr1[1], arr1[2]);
	//printf("%d, %d, %d\n", arr2[0], arr2[1], arr2[2]); // No element was appended into this array so it raises seg fault
	printf("%d, %d, %d\n", arr3[0], arr3[1], arr3[2]);
	return (0);
}
