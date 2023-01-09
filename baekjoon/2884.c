#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m;
	scanf("%d %d", &h,&m);

	if ((h >= 0 && h <= 23) && (m >= 45 && m <= 59))
		printf("%d %d", h, m - 45);
	else if ((h >= 1 && h <= 23) && (m >= 0 && m <= 44))
		printf("%d %d", h - 1, m+15);
	else if ((h ==0) && (m >= 0 && m <= 44))
		printf("%d %d", 23,m+15);
	



	printf("\n");
	return 0;
}