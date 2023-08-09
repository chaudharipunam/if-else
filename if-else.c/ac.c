#include <stdio.h>
#include<math.h>
int main()
{
	float r;
	printf("enter the no. of r: ");
	scanf("%f",&r);
	float c=pow(r,2);
	float ac=3.14*c;
	printf("area of circle: %.2f\n",ac);
	return 0;
}
