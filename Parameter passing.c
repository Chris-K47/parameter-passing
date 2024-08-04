#include <stdio.h>

// Function prototypes
void passByValue(int a);
void passByReference(int *b);

int main() {
    // Declare two integer variables
    int num1 = 5;
    int num2 = 10;

    // Print original values
    printf("Original values:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Call passByValue function
    printf("\nCalling passByValue with num1:\n");
    passByValue(num1); // num1 will not change
    printf("num1 after passByValue: %d\n", num1); // num1 remains the same

    // Call passByReference function
    printf("\nCalling passByReference with num2:\n");
    passByReference(&num2); // num2 will be changed
    printf("num2 after passByReference: %d\n", num2); // num2 is updated

    return 0;
}

// Function to show pass by value
void passByValue(int a) {
    // Modify the local copy of a
    a = a * 2;
    printf("Inside passByValue, a is now: %d\n", a);
}

// Function to show pass by reference
void passByReference(int *b) {
    // Modify the value at the address b points to
    *b = *b * 2;
    printf("Inside passByReference, *b is now: %d\n", *b);
}
