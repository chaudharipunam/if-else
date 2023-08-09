#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(int day, int month, int year) {
    if (year <= 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return 0; // Date is not valid
    }

    int maxDaysInMonth = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDaysInMonth = 30;
    } else if (month == 2) {
        // Check for February and consider leap years
        if (isLeapYear(year)) {
            maxDaysInMonth = 29;
        } else {
            maxDaysInMonth = 28;
        }
    }

    return day <= maxDaysInMonth;
}

int main() {
    int day, month, year;

    printf("Enter a date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (isValidDate(day, month, year)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is not valid.\n");
    }

    return 0;
}

