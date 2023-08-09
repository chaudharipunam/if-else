#include<stdio.h>
int main()
{
	int a,b,c;
	printf ("enter the a: ");
	scanf("%d",&a);
	printf ("enter the b: ");
	scanf("%d",&b);
	c=a+b;
	if(c>=15&c<21){
	printf(" 20 ");
	} else {
	printf("%d",c);
	}
	return 0;
}
