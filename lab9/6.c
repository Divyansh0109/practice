//Write user input menu driven program to arrange the name of students of a class
//alphabetically in ascending and descending order if user enters a choice of character ‘A’ and ‘D’
//respectively.
#include <stdio.h>
#include <string.h>
int main() {
    char names[100][50];
    int n, i, j;
    char choice, temp[50];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter names of students:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    printf("Enter choice (A for ascending, D for descending): ");
    scanf(" %c", &choice);
    // Sorting names based on user choice
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if((choice == 'A' && strcmp(names[i], names[j]) > 0) ||
               (choice == 'D' && strcmp(names[i], names[j]) < 0)) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Sorted names:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}