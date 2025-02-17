#include <stdio.h>

int main() {
    int n;

    // Prompt the user for input
    printf("Enter an even integer: ");

    // Input validation: Check if scanf successfully reads an integer
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1; // Exit with error code
    }

    // Check if the number is even
    if (n % 2 != 0) {
        printf("Error: Input is not an even integer.\n");
        return 1; // Exit with error code
    }

    // Print alternating symbols
    printf("Output: "); // Added a label for clarity
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("*");
        } else {
            printf("+");
        }
    }
    printf("\n");

    return 0; // Exit successfully
}
