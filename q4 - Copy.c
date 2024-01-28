#include <stdio.h>

int main() {
    int m, n;

    // Input: Get two integers
    printf("Enter two integers (m and n): ");
    scanf("%d %d", &m, &n);

    // Check if m is a factor of n
    if (n % m == 0) {
        printf("factor\n");
    } else {
        printf("not a factor\n");
    }

    return 0;
}
