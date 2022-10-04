#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int y;

	for (i = 0; i < 5; i++)
	{
		for (j = i; j <= 5 - 1; j++)
		{
			printf(" ");
		}
		for (y = 0; y <= (i * 2); y++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}