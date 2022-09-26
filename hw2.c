#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long double km, mile;
	printf("Please enter kilometers : ");
	scanf("%Lf", &km);
	mile = km / 1.609;
	printf("%.1Lf km is equal to %.1Lf miles. \n", km, mile);
	return 0;
}

