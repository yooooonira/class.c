#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, count = 0;
	printf("정수 입력 : ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)			//나눠지면 소수가 아님
		{
			count++;				//count가 쌓이면 소수가 아님. 
		}
	}
	if (count > 0)
	{
		printf("It is not a prime number\n");
	}
	else
	{
		printf("It is a prime number\n");
	}
	return 0;
}