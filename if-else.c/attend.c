#include<stdio.h>
int main()
{
	int a,b,p;
	printf ("enter the a: ");
	scanf("%d",&a);
	printf ("enter the b: ");
	scanf("%d",&b);
	p=((a/b)*100);
	if(p>75){
	printf("students allow to sit in exam ");
	} 
	else {
	printf(" students not allow to sit in exam ");
	}
	return 0;
}
