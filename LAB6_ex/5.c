#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print alphabets
        for (int j = 1; j <= i; j++) {
            printf("%c", 'a' + i - 1);
        }

        
        for (int j = n - i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
