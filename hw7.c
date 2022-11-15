#include <stdio.h>
int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int *parr1=arr1;
	int *parr2=arr2;
	int i;

	printf("arr1:");
	for (i = 0; i < 6;i++) 
	{
		printf("%d ", arr1[i]);

	}
	printf("\narr2:");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);

	}
	printf("\n");
	printf("\nafter swap");
	printf("\narr1:");
	for (i = 0; i < 6; i++)
	{
		*(parr1 + i) += 6;
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\narr2:");
	for (i = 0; i < 6; i++)
	{
		*(parr2 + i) -= 6;
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}
