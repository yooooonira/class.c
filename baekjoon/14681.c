#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if ((a > 0 && a <= 1000) && (b > 0 && b <= 1000))
		printf("1");
	else if ((a >=-1000 && a < 0) && (b > 0 && b <= 1000))
		printf("2");
	else if ((a >= -1000 && a < 0) && (b >= -1000 && b < 0))
		printf("3");
	else if ((a > 0 && a <= 1000) && (b >= -1000 && b < 0))
		printf("4");
	printf("\n");
	return 0;
}