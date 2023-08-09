#include <stdio.h>

int main() {
    int BS, HRA, DA, GS;

    printf("ENTER THE BASIC SALARY: ");
    scanf("%d", &BS);

    if (BS > 20000) {
        HRA = (BS * 30) / 100;
        DA = (BS * 95) / 100;
    } else if (BS > 10000) {
        HRA = (BS * 25) / 100;
        DA = (BS * 90) / 100;
    } else {
        HRA = (BS * 20) / 100;
        DA = (BS * 80) / 100;
    }

    GS = BS + HRA + DA;
    printf("Gross Salary: %d\n", GS);

    return 0;
}

