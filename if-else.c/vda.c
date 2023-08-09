#include <stdio.h>
int main()
{
	int vda,smo,bill;
	printf("enter the no. of vda: ");
	scanf("%d",&vda);
	printf("enter thr no. smo: ");
	scanf("%d",&smo);
        bill=(vda*12)+(smo*15);
	printf("%d",bill);
	return 0;
}
