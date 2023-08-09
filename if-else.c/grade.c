#include<stdio.h>
int main()
{
	int phy,che,bio,math,com,p;
	printf ("enter the no. of phy: ");
	scanf("%d",&phy);
	printf ("enter the no. of che: ");
	scanf("%d",&che);
	printf ("enter the no. of bio: ");
	scanf("%d",&bio);
	printf ("enter the no. of math: ");
	scanf("%d",&math);
	printf ("enter the no. of com: ");
	scanf("%d",&com);
	p=(((phy+che+bio+math+com)/500)*100);
	printf("percentage is: \n");
	if
	(p>=90){
	printf("Grade A");
	} else if 
	(p>=80){
	printf("Grade B");
	} else if
	(p>=70){
	printf ("Grade C");
	} else if 
	(p>=60){
	printf("Grade D");
	} else if
	(p>=40){
	printf ("Grade E");
	} else  
	(p<40){
	printf("Grade F ");
	} 
	return 0;
}




