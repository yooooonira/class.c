#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
typedef struct city
{
	char name[50];
	char country[50];
	int population;
}City;
int main(void)
{
	City fir;
	City sec;
	City thi;
	
	printf("Input three cities:\n");
	printf("name> ");
	scanf("%s", fir.name);
	printf("county> ");
	scanf("%s", fir.country);
	printf("population> ");
	scanf("%d", &fir.population);
	printf("name> ");
	scanf("%s", sec.name);
	printf("county> ");
	scanf("%s", sec.country);
	printf("population> ");
	scanf("%d", &sec.population);
	printf("name> ");
	scanf("%s", thi.name);
	printf("county> ");
	scanf("%s", thi.country);
	printf("population> ");
	scanf("%d", &thi.population);
	
	printf("\nPrinting the three cities:\n");
	printf("1. %s in %s with a popualtion of %d people\n", fir.name,fir.country, fir.population);
	printf("2. %s in %s with a popualtion of %d people\n", sec.name, sec.country, sec.population);
	printf("3. %s in %s with a popualtion of %d people\n", thi.name, thi.country, thi.population);
	

	return 0;
}
