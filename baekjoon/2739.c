#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);

	int i;
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);

	}

	printf("\n");

	return 0;
}