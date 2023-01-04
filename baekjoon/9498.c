#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B;
	//printf("정수 a와 b를 입력하세요:");
	scanf("%d %d", &A, &B);
	if (A >= -10000 && B <= 10000)
	{
		if (A > B)
			printf(">");
		else if (A < B)
			printf("<");
		else
			printf("==");
	}
	printf("\n");
	return 0;
}