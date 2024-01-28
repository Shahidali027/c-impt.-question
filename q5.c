#include <stdio.h>

int main() {
    int number, originalNumber, newNumber = 0, multiplier = 1;

    // Input: Get a positive integer
    printf("Enter a positive integer (1 <= number <= 10^6): ");
    scanf("%d", &number);

    // Check constraints
    if (number < 1 || number > 1000000) {
        printf("Invalid input. Please enter a positive integer within the valid range.\n");
        return 1;  // Return an error code
    }

    originalNumber = number;  // Save the original number

    // Add one to each digit of the number
    while (number > 0) {
        int digit = number % 10;
        int newDigit = (digit + 1) % 10;
        newNumber = newNumber + (newDigit * multiplier);
        multiplier *= 10;
        number /= 10;
    }

    // Output: Print the new number
    printf("Original Number: %d\n", originalNumber);
    printf("New Number: %d\n", newNumber);

    return 0;
}
