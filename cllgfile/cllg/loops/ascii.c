#include <stdio.h>
#include <math.h>

int main() {
    printf("The Armstrong numbers are:\n");

    int temp, count, lastDigit, sum;

    for (int i = 1; i <= 500; i++) { // Adjusted range for testing
        temp = i;
        count = 0;
        sum = 0;

        // Count the number of digits
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }

        temp = i;

        // Calculate the sum of the digits raised to the power of count
        while (temp != 0) {
            lastDigit = temp % 10;
            sum += pow(lastDigit, count);
            temp = temp / 10;
        }

        // Check if the number is an Armstrong number
        if (i == sum) {
            printf("%d\n", i); // Print Armstrong numbers
        }
    }

    return 0;
}
