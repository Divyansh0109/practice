#include <stdio.h>

int main() {
    int n, i, isMonotonic = 1;   // assume it is monotonic
    int arr[100];

    printf("Enter size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for monotonic increasing
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isMonotonic = 0;
            break;
        }
    }

    if (isMonotonic)
        printf("The array is a monotonic increasing array.\n");
    else
        printf("The array is NOT a monotonic increasing array.\n");

    return 0;
}
