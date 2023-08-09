#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf ("enter the s1: ");
	scanf("%d",&s1);
	printf ("enter the s2: ");
	scanf("%d",&s2);
	printf ("enter the s3: ");
	scanf("%d",&s3);
	if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        if (s1 == s2 && s2 == s3) {
            printf("It is an equilateral triangle.\n");
        } else if (s1 == s2 || s1 == s3 || s2 == s3) {
            printf("It is an isosceles triangle.\n");
        } else {
            printf("It is a scalene triangle.\n");
        }

        // Check if it's a right-angled triangle
        if (s1 * s1 + s2 * s2 == s3 * s3 || s1 * s1 + s3 * s3 == s2 * s2 || s2 * s2 + s3 * s3 == s1 * s1) {
            printf("It is a right-angled triangle.\n");
        }
    } else {
        printf("The given sides cannot form a valid triangle.\n");
    }

    return 0;
}



   

