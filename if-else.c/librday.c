#include<stdio.h>
int main()
{
	int day,charge;
	printf("enter the no. of day: ");
	scanf("%d",&day);
	if (day<=5) {
	charge=day*2;
	} else if 
        (day>=10 && day<=15){
        charge=5*2+(day-5)*3;
        } else if
        (day>=15 && day<=20){
        charge=5*2+5*3+(day-10)*4;
        } else if 
        (day>20){
        charge=5*2+5*3+5*4+(day-20)*5;
        printf ("invalid number of days.\n");
        return 1;
        }
        printf("The charge for %d days: Rs %d\n", day, charge);

    return 0;	
}

 
