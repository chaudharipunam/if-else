#include<stdio.h>
int main()
{
	int year,s,ntbons;
	printf ("enter the year: ");
	scanf("%d",&year);
	printf ("enter the s: ");
	scanf("%d",&s);
	if(year>5)
	{
		ntbons=(s*5)/100;
		printf("net bonus is: %d\n ",ntbons);
	}
	else
	{
		printf("not eligible for bonus ");
	}
	return 0;
}




