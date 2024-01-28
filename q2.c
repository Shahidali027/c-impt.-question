#include <stdio.h>

int main() {
    int n;

    // Input: Get the value of n
    printf("Enter the value of n (1 <= n <= 32768): ");
    scanf("%d", &n);

    // Check constraints
    if (n < 1 || n > 32768) {
        printf("Invalid input. Please enter a value within the valid range.\n");
        return 1;  // Return an error code
    }

    // Print the series up to the nth term
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i - 1);
    }

    printf("\n");

    return 0;
}
