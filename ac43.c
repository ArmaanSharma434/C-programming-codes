//WAP to print first n natural numbers
#include <stdio.h>

int main() {
    int n, i;

    // 1. Get the value of 'n' from the user
    printf("Enter the positive integer (n) up to which you want to print natural numbers: ");
    scanf("%d", &n);

    // Input validation: Natural numbers are 1, 2, 3, ...
    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; // Return non-zero to indicate an error
    }

    printf("\n--- First %d Natural Numbers ---\n", n);

    // 2. Use a for loop to print the numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    // Print a newline character for clean formatting after the loop finishes
    printf("\n-----------------------------------\n");

    return 0;
}