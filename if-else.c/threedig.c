#include<stdio.h>
int main()
{
	int num;
	printf ("enter the num: ");
	scanf("%d",&num);
	if(num>99&num<1000){
	printf("it is three digit");
	} else {
	printf("it is not three digit");
	}
	return 0;
}
