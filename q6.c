#include <stdio.h>

int main() {
    int size, k;

    // Input: Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check constraints
    if (size < 1 || size > 100000) {
        printf("Invalid input. Please enter a valid size for the array.\n");
        return 1;  // Return an error code
    }

    // Input: Get the elements of the array
    printf("Enter %d elements for the array: ", size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Get the rotation factor 'k'
    printf("Enter the rotation factor (1 <= k <= %d): ", size);
    scanf("%d", &k);

    // Check constraints
    if (k < 1 || k > size) {
        printf("Invalid input. Please enter a valid rotation factor.\n");
        return 1;  // Return an error code
    }

    // Rotate the array
    int temp[k];

    // Copy the last k elements to a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy back the temporary array to the beginning of the array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Output: Print the rotated array
    printf("Rotated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
