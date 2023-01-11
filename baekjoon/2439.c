#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k,a;
	scanf("%d", &a);

	for (i = 1;i <= a; i++)
	{
		for (j = a; j >i; j--)
		{
			printf(" ");
		}
		for (k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}