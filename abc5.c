/*
0123456789
9012345678
9801234567
9870123456
9876012345
9876501234
9876540123
9876543012
9876543201
9876543210*/
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = n-1; j >= i; j--) {
            printf("%d", j);
        }
        
        for (j = 0; j < i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}