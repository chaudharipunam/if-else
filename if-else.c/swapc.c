#include <stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER  THE VALUE Ofa:- ");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF b:- ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("now a is: %d\n",a);
	printf("now b is: %d\n",b);
	return 0;
}
	
