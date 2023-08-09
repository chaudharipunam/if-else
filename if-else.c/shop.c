#include<stdio.h>
int main()
{
	int quantity,discount,total_cost;
	printf ("enter the quantity: ");
	scanf("%d",&quantity);
	
	int unit_cost=100;
	 int total_cost_without_discount = unit_cost * quantity;
    
    if (total_cost_without_discount > 1000)
    {
        discount = (total_cost_without_discount * 10) / 100;
        total_cost = total_cost_without_discount - discount;
        printf("Total cost with discount: %d\n", total_cost);
    }
    else
    {
        printf("Total cost without discount: %d\n", total_cost_without_discount);
    }
    return 0;
}	
