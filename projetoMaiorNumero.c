#include <stdio.h>
#include <limits.h>

int main() {
    int number;
    int largest = INT_MIN;  // Initialize largest to the smallest possible integer value
    int smallest = INT_MAX; // Initialize smallest to the largest possible integer value

    printf("Enter numbers (enter -1 to stop):\n");

    while (number>0) {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Check if the user wants to stop entering numbers
        if (number == -1) {
            break;
        }

        // Update largest and smallest
        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }
    }

    // Check if any numbers were entered
    if (largest == INT_MIN && smallest == INT_MAX) {
        printf("No numbers were entered.\n");
    } else {
        printf("The largest number entered is: %d\n", largest);
        printf("The smallest number entered is: %d\n", smallest);
    }

    return 0;
}