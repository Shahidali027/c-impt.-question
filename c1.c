#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input: Get the string
    printf("Enter a string (max 99 characters): ");
   gets(str);

    // Check constraints
    if (strlen(str) > 99) {
        printf("Invalid input. Please enter a string with a length of 99 characters or less.\n");
        return 1;  // Return an error code
    }

    // Reverse the string
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
