#include <stdio.h>
int main()
{
	float obtmark,totalmark;
	printf("enter the no. of obtmark: ");
	scanf("%f",&obtmark);
	printf("enter the no. of totalmark: ");
	scanf("%f",&totalmark);
	float perc=(obtmark/totalmark)*100;
	printf("%.1f",perc);
	return 0; 
}
