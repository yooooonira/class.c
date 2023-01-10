#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int X, N, i, a, b, sum = 0;
	scanf("%d", &X);
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	
	if (sum == X)
		printf("Yes\n");
	else
		printf("No\n");


	return 0;
}