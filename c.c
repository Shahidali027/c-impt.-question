#include <stdio.h>

int main() {
    int start_year, end_year;

    // Input: Starting and ending year
    printf("Enter the starting and ending years (start_year end_year): ");
    scanf("%d %d", &start_year, &end_year);

    // Check the constraints
    if (start_year < 1 || end_year < 1 || start_year > 106 || end_year > 106 || start_year > end_year) {
        printf("Invalid input. Please enter valid years within the specified range.\n");
        return 1;  // Return an error code
    }

    // Output: Leap years in the specified range
    printf("Leap years between %d and %d: ", start_year, end_year);
    for (int year = start_year; year <= end_year; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
    }
    printf("\n");

    return 0;
}
