#include<stdio.h>
int main()
{
	int age;
	printf ("enter the age: ");
	scanf("%d",&age);
	if(age>18){
	printf("person eligible for voting: ");
	} else {
	printf("person not eligible for voting: ");
	}
	return 0;
}
