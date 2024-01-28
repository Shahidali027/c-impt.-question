#include <stdio.h>

int main() {
    int N1, N2;

    // Input: Get two integers
    printf("Enter two integers (N1 and N2): ");
    scanf("%d %d", &N1, &N2);

    // Check if the signs are the same
    if ((N1 ^ N2) >= 0) {
        // If XOR of N1 and N2 is non-negative, it means they have the same sign
        printf("Both are same sign\n");
    } else {
        printf("They have different signs\n");
    }

    return 0;
}
