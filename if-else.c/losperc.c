#include <stdio.h>
int main()
{
	float sp,cp,l,lp;
	printf("enter the sp: ");
	scanf("%f",&sp);
	printf("enter the cp: ");
	scanf("%f",&cp);
	if (sp<cp){
	l=cp-sp;
	lp=(l/sp)*100;
	printf("loss: %.0f \n",l);
	printf("loss percentage is: %.1f",lp);
	}
	else {
	printf("invalid");
	}
	return 0;
}
