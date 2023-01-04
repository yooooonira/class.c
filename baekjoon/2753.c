#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A;
	scanf("%d", &A);
	if (A >= 1 && A <= 4000)
	{
		if ((A % 4 == 0) && (A % 100 != 0))
			printf("1");
		else if ((A % 4 == 0) && (A % 400 == 0))
			printf("1");
		else
			printf("0");
			
	}
	printf("\n");
	return 0;
}