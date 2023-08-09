#include<stdio.h>
int main()
{
	int length,breath,ar,pr;
	printf ("enter the length: ");
	scanf("%d",&length);
	printf ("enter the breath: ");
	scanf("%d",&breath);
	ar=length*breath;
	pr=2*(length*breath);
	if(ar>pr){
	printf("Area is Greater");
	} else if 
	(ar<=pr){
	printf("Perimeter is Greater");
	} else {
	printf("Area & Perimeter both are equal");
	}
	return 0;
}
