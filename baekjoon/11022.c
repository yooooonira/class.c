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
		printf("Case #%d: %d + %d = %d\n", i, b, c, c + b);
	}//Case #x: A + B = C
	printf("\n");

	return 0;
}