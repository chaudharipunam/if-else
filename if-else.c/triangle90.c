#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    
    // Input angles of the triangle
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    
    // Check if the angles form a valid triangle
    int sumOfAngles = angle1 + angle2 + angle3;
    if (sumOfAngles != 180) {
        printf("The angles do not form a valid triangle.\n");
        return 0; // Terminate the program
    }

    // Determine if the triangle is equiangular
    if (angle1 == angle2 && angle2 == angle3) {
        printf("The triangle is equiangular.\n");
    } else {
        // Determine if the triangle is right-angled, obtuse-angled, or acute-angled
        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("The triangle is right-angled.\n");
        } else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
            printf("The triangle is obtuse-angled.\n");
        } else {
            printf("The triangle is acute-angled.\n");
        }
    }

    return 0;
}

