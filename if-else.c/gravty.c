#include <stdio.h>
int main()
{
	float time,efflength;
	printf("enter the no. of time: ");
	scanf("%f",&time);
	printf("enter the no. of efflength: ");
	scanf("%f",&efflength);
	float gravity=((4*(3.14*3.14)*efflength)/time*time);
	printf("%.2f",gravity);
	return 0; 
}
