#include <stdio.h>

int main() {
    int lastdigit;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (int i = 1; i <= 500; i++) {
        int sum = 0;
        int temp = i; // Use a temporary variable for calculations

        while (temp != 0) {
            lastdigit = temp % 10; // Extract the last digit
            sum = sum + (lastdigit * lastdigit * lastdigit); // Add the cube of the digit to the sum
            temp = temp / 10; // Remove the last digit
        }

        // Check if the number is an Armstrong number
        if (i == sum) {
            printf("%d ", sum);
        }
    }

    printf("\n");
    return 0;
}
