#include <stdio.h>
int main()
{
	int l,w,h,lsac,tsac;
	printf("enter the no.of l: ");
	scanf("%d",&l);
	printf("enter the no.of w: ");
	scanf("%d",&w);
	printf("enter the no.of h: ");
	scanf("%d",&h);
	lsac=2*h*(l+w);
	tsac=2*(l*w+w*h+l*h);
	printf("%d \n",lsac);
	printf("%d",tsac);
	return 0;
}
