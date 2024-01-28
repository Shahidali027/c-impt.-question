#include <stdio.h>

int findGCD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int num1, num2;

    // Input: Get two numbers
    printf("Enter two numbers (1 <= num1, num2 <= 1000): ");
    scanf("%d %d", &num1, &num2);

    // Check constraints
    if (num1 < 1 || num2 < 1 || num1 > 1000 || num2 > 1000) {
        printf("Invalid input. Please enter two numbers within the valid range.\n");
        return 1;  // Return an error code
    }

    // Find and print the GCD (HCF)
    int gcd = findGCD(num1, num2);
    printf("%d\n", gcd);

    return 0;
}
