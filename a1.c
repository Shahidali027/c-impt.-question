#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using GCD
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int a, b;

    // Input: Two positive integers
    printf("Enter two positive integers (a and b): ");
    scanf("%d %d", &a, &b);

    // Check constraints
    if (a <= 0 || b <= 0 || a > 1000000 || b > 1000000) {
        printf("Invalid input. Please enter positive integers within the valid range.\n");
        return 1;
    }

    // Calculate GCD and LCM
    int gcd = calculateGCD(a, b);
    int lcm = calculateLCM(a, b);

    // Output: GCD and LCM
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
