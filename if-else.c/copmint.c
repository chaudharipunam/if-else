#include<stdio.h>
#include<math.h>

int main()
{
	float p,i,n;
	printf("enter the no p:");
	scanf("%f",&p);
	printf("enter the no i:");
	scanf("%f",&i);
	printf("enter the no n:");
	scanf("%f",&n);
	float t=pow((1+(i/100)),n);
	float c=p*t;
	printf("%.2f\n",c);
	return 0;

}
