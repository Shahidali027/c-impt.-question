#include <stdio.h>

int main() {
    char str[100];

    // Input: Get the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Encrypt the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if ((i + 1) % 2 == 1) {
                for (int j = 0; j < (str[i] - 'A' + 1); j++) {
                    printf("!");
                }
            } else {
                for (int j = 0; j < (str[i] - 'A' + 1); j++) {
                    printf("@");
                }
            }
        } else {
            printf("None\n");
            return 0;  // Exit the program
        }
    }

    printf("\n");

    return 0;
}
