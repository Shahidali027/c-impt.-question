#include <stdio.h>

int main() {
    int units;
    float charge, surcharge, totalAmount;

    // Input: Enter the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate charges based on the given conditions
    if (units <= 199) {
        charge = units * 1.20;
    } else if (units >= 200 && units < 400) {
        charge = units * 1.50;
    } else if (units >= 400 && units < 600) {
        charge = units * 1.80;
    } else {
        charge = units * 2.00;
    }

    // Apply surcharge if the bill exceeds Rs. 400
    if (charge > 400) {
        surcharge = charge * 0.15;
    } else {
        surcharge = 0;
    }

    // Calculate total amount payable
    totalAmount = charge + surcharge;

    // Ensure the minimum bill is Rs. 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    // Output: Net amount payable (bill amount + surcharge)
    printf("Net amount payable: %.2f\n", totalAmount);

    return 0;
}
