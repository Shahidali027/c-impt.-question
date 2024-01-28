
#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void nextPermutation(char *str, int n) {
    int i, j;

    // Find the rightmost character that is smaller than its next character
    for (i = n - 2; i >= 0; i--) {
        if (str[i] < str[i + 1]) {
            break;
        }
    }

    // If no such character is found, then the string is the last permutation
    if (i == -1) {
        return;
    }

    // Find the smallest character on the right side of (i) that is greater than str[i]
    for (j = n - 1; j > i; j--) {
        if (str[j] > str[i]) {
            break;
        }
    }

    // Swap the found characters
    swap(&str[i], &str[j]);

    // Reverse the substring to the right of (i)
    int start = i + 1;
    int end = n - 1;
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

int main() {
    int n;

    // Input: Get the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Check constraints
    if (n < 2 || n > 9) {
        printf("Invalid input. Please enter a valid number of strings.\n");
        return 1;  // Return an error code
    }

    char strings[n][11];

    // Input: Get strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // Print permutations in lexicographical order
    do {
        for (int i = 0; i < n; i++) {
            printf("%s ", strings[i]);
        }
        printf("\n");
        nextPermutation(strings[0], strlen(strings[0]));
    } while (strings[0][0] != '\0');

    return 0;
}
