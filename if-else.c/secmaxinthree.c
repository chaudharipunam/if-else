#include <stdio.h>

int main() {
    int a, b, c;
    int maxa, maxb; // Variables to store the two maximum numbers

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    // Find the maximum of a and b
    if (a > b) {
        maxa = a;
        maxb = b;
    } else {
        maxa = b;
        maxb = a;
    }

    // Compare maxa with c to find the second maximum
    if (c > maxa) {
        maxb = maxa; // Update maxb to the current maxa
        maxa = c;    // Update maxa to the new maximum (c)
    } else if (c > maxb) {
        maxb = c; // Update maxb to the new maximum (c)
    }

    printf("The second maximum number is: %d\n", maxb);

    return 0;
}

