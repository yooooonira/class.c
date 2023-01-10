#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d", &a);

	int i;
	for (i = 1; i <= a; i++)
	{
		scanf("%d %d", &b, &c);
		printf("Case #%d: %d\n", i, c + b);
	}
	printf("\n");

	return 0;
}