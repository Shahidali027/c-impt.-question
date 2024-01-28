#include <stdio.h>

int main() {
    int n;

    // Input: Get the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Check constraints
    if (n < 1 || n > 100000) {
        printf("Invalid input. Please enter a valid number of names.\n");
        return 1;  // Return an error code
    }

    char names[n][100];
    char searchName[100];

    // Input: Get names
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Input: Get name to search
    printf("Enter a name to be searched: ");
    scanf("%s", searchName);

    // Search for the name
    int position = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], searchName) == 0) {
            position = i + 1;
            break;
        }
    }

    // Output: Print the result
    if (position != -1) {
        printf("%s Found at Position '%d'\n", searchName, position);
    } else {
        printf("%s NOT Present in Above Array\n", searchName);
    }

    return 0;
}
