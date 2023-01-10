#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, sum = 0;
	scanf("%d", &a);

	int i;
	for (i = 1; i <= a; i++)
	{
		
		sum += i;
	}

	printf("%d\n",sum);

	return 0;
}