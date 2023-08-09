#include <stdio.h>

int main() {
    int units;
    float totalBill = 0.0;

    // Input electricity units
    printf("Enter the number of electricity units: ");
    scanf("%d", &units);

    if (units <= 100) {
        // No charge for the first 100 units
        totalBill = 0;
    } else if (units <= 200) {
        // First 100 units are free, next 100 units charged at Rs 5 per unit
        totalBill = (units - 100) * 5;
    } else {
        // First 100 units are free, next 100 units charged at Rs 5 per unit,
        // and remaining units charged at Rs 10 per unit
        totalBill = 100 * 5 + (units - 200) * 10;
    }

    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}

