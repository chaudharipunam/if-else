#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3, side4, angle;
    
    // Input lengths of four sides and one internal angle (in degrees)
    printf("Enter the lengths of four sides: ");
    scanf("%f %f %f %f", &side1, &side2, &side3, &side4);
    
    printf("Enter the internal angle (in degrees): ");
    scanf("%f", &angle);
    
    // Check if it is a square
    if (side1 == side2 && side2 == side3 && side3 == side4 && angle == 90) {
        printf("It is a square.\n");
    }
    // Check if it is a rhombus
    else if (side1 == side2 && side2 == side3 && side3 == side4) {
        printf("It is a rhombus.\n");
    }
    // Check if it is a rectangle
    else if ((side1 == side3 && side2 == side4 && angle == 90) ||
             (side1 == side2 && side3 == side4 && angle == 90)) {
        printf("It is a rectangle.\n");
    }
    // Check if it is a parallelogram
    else if ((side1 == side3 && side2 == side4) ||
             (side1 == side2 && side3 == side4) ||
             (side1 == side4 && side2 == side3)) {
        printf("It is a parallelogram.\n");
    }
    // If it does not match any of the above, it is an irregular quadrilateral
    else {
        printf("It is an irregular quadrilateral.\n");
    }
    
    return 0;
}

