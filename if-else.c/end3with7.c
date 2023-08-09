#include <stdio.h>
int main()
{
	int n;
	printf("enter the num: ");
	scanf("%d",&n);
	p=n%10;
	if (p==3)
	{
		printf("3");
	}
	else if (p==7)
	{
		printf("7")
	}
	else
	{
		printf("%d",p)
	}
	
}
