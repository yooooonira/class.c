#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, a;
	scanf("%d", &a);

	for (i = 1;i <= a; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
			
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}