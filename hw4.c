#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, count = 0;
	printf("���� �Է� : ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)			//�������� �Ҽ��� �ƴ�
		{
			count++;				//count�� ���̸� �Ҽ��� �ƴ�. 
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