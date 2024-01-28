#include <stdio.h>

int main() {
    int n;

    // Input: Get the number of participants
    printf("Enter the number of participants: ");
    scanf("%d", &n);

    // Check constraints
    if (n < 1 || n > 100000) {
        printf("Invalid input. Please enter a valid number of participants.\n");
        return 1;  // Return an error code
    }

    int participants[n];

    // Input: Get the qualities of participants
    printf("Enter qualities of participants: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &participants[i]);
    }

    // Finding the leader
    int leader = participants[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (participants[i] > leader) {
            leader = participants[i];
        }
    }

    // Output: Print the leader
    printf("Leader: %d\n", leader);

    return 0;
}
