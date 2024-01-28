#include <stdio.h>

int main() {
    int n;

    // Input: Get the size of the list
    printf("Enter the size of the list: ");
    scanf("%d", &n);

    // Check constraints
    if (n < 1 || n > 1000) {
        printf("Invalid input. Please enter a valid size for the list.\n");
        return 1;  // Return an error code
    }

    int evenNumbers[n];
    int count = 0;

    // Input: Get the elements of the list
    printf("Enter %d numbers for the list: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &evenNumbers[i]);
        if (evenNumbers[i] % 2 == 0) {
            count++;
        }
    }

    // Output: Print the list of even numbers
    if (count > 0) {
        printf("Even Number List: ");
        for (int i = 0; i < n; i++) {
            if (evenNumbers[i] % 2 == 0) {
                printf("%d ", evenNumbers[i]);
            }
        }
        printf("\n");
    } else {
        printf("No even numbers in the list.\n");
    }

    return 0;
}
