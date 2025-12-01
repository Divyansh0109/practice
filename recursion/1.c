#include <stdio.h>

void sortArray(int arr[], int size, int choice) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((choice == 1 && arr[i] > arr[j]) || (choice == 2 && arr[i] < arr[j])) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n1, n2;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Merge both arrays into a third array
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    printf("\nMerged Array:\n");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    // User choice for sorting
    int choice;
    printf("\n\nEnter 1 for Ascending or 2 for Descending order: ");
    scanf("%d", &choice);

    // Sort merged array
    sortArray(merged, n1 + n2, choice);

    return 0;
}
