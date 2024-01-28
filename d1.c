#include <stdio.h>

int main() {
    unsigned int N;  // Use unsigned int to handle 0 and positive integers

    // Input: Get the positive integer
    printf("Enter a positive integer (1 <= N <= 109): ");
    scanf("%u", &N);

    // Check constraints
    if (N < 1 || N > 109) {
        printf("Invalid input. Please enter a positive integer within the valid range.\n");
        return 1;  // Return an error code
    }

    // Check if N is a power of 2
    if ((N & (N - 1)) == 0) {
        // If N is a power of 2, the bitwise AND of N and N-1 will be 0
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
