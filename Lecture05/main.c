#include <stdio.h>

int main()
{
	int i = 1;
	int j = 6;
	int a = 1;
	if (1)
	{
		while (j)
		{
			while (i)
			{
				printf("*");
				i--;
			}
			printf("\n");
			a++;
			i = i + a;
			j--;
		}
	}
	return 0;
}