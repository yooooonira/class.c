#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m, a;
	scanf("%d %d", &h,&m);
	scanf("%d",&a);

	if (59 >= m + a)
	{
		printf("%d %d", h, m + a);
	}
	else if (m + a > 59)
	{
		if (m + a > 59 && m + a <= 119)
		{
			printf("%d %d", h + 1, m + a - 60);
		}
	}

	
	

	printf("\n");
	return 0;
}