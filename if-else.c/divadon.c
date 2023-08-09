#include<stdio.h>
int main()
{
	int num,incre,decre;
	printf ("enter the num: ");
	scanf("%d",&num);
	incre=num+1;
	decre=num-1;
	if(num%4==0){
	printf("%d",incre);
	} else {
	printf("%d",decre);
	}
	return 0;
}
