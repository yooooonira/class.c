#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int two(int x);

int main(void) 
{
	int num;

	printf("Please enter the number: ");
	scanf("%d", &num); 
	two(num);

	return 0;

}

int two(int x) 
{ 
	if (x == 0 || x == 1)
		printf("%d", x);
	else 
	{
		two(x / 2);
		printf("%d", x % 2); 
	}
	return 0;
}





