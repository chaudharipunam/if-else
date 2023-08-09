#include<stdio.h>
int main()
{
	int H,M,E,G,S;
	int H1,M1,E1,G1,S1;
	printf("Enter the marks of first student:- ");
	scanf("%d%d%d%d%d",&H,&M,&E,&G,&S);
	printf("Enter the marks of second student:- ");
	scanf("%d%d%d%d%d",&H1,&M1,&E1,&G1,&S1);
	int a=H+M+E+G+S;
	int b=H1+M1+E1+G1+S1;
	if(a>b)
	{
		printf("a is topper");
	}
	else
	{
		printf("b is topper");
	}
	return 0;
	
	
}
        
