#include<stdio.h>
int main()
{
	int num;
	printf ("enter the num: ");
	scanf("%d",&num);
	if(num==0){
	printf("it is zero ");
	} 
	else if(num>0) {
	printf("it is positive no. ");
	} 
	else if(num<0) {
	printf("it is negative no.");
	}
	else {
	printf ("invalid");
	}
	return 0;
}
