#include <stdio.h>

int main() {
    int num, temp, digit;
    int totalDigits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count total digits
    temp = num;
    while (temp != 0) {
        totalDigits++;
        temp /= 10;
    }

    printf("Total number of digits: %d\n", totalDigits);

    // Find frequency of each digit from 0 to 9
    for (digit = 0; digit <= 9; digit++) {
        int count = 0;
        temp = num;

        // Count frequency of current digit
        while (temp != 0) {
            int currentDigit = temp % 10;
            if (currentDigit == digit)
                count++;
            temp /= 10;
        }

        if (count > 0) {
            printf("Frequency of digit %d is %d\n", digit, count);
        }
    }

    return 0;
}
