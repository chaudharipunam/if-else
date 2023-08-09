#include<stdio.h>
int main()
{
	int a,b,sum;
	printf ("enter the a: ");
	scanf("%d",&a);
	printf ("enter the b: ");
	scanf("%d",&b);
	sum=a+b;
	if(a>b){
	printf("A is greater than B ");
	} else {
	printf("%d",sum);
	}
	return 0;
}
