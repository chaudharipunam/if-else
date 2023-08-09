#include <stdio.h>
int main()
{
	float sp, cp,p,pp;
	printf("enter the sp: ");
	scanf("%f",&sp);
	printf("enter the cp: ");
	scanf("%f",&cp);
	if (sp>cp){
	p=sp-cp;
	pp=(p/cp)*100;
	printf("profit: %.0f \n",p);
	printf("profit percentage is: %.1f",pp);
	}
	else {
	printf("invalid");
	}
	return 0;
}
