#include <stdio.h>
int main()
{
	int sp,cp,p,l;
	printf("enter the no of sp: ");
	scanf("%d",&sp);
	printf("enter the no of cp: ");
	scanf("%d",&cp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("profit: %d\n",p);
	}
	else if(sp==cp)
	{
		printf("no loss & no profit\n");
	}
	else
	{
		l=cp-sp;
		printf("loss: %d\n",l);
	
	}
	return 0;

}




