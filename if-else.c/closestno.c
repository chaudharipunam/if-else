#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the no. of a: ");
	scanf("%d",&a);
	printf("enter thr no. of b: ");
	scanf("%d",&b);
        c=a/b;
        d=c*b;
	printf("the closest no. is: %d",d);
	return 0;
}
