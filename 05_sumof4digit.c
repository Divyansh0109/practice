#include <stdio.h>
int main() {
    int n;
    printf("Enter a four-digit number: ");
    scanf("%d", &n);
    int d1 = (n%10);
    n = n / 10;
    int d2 = (n%10);
    n = n / 10;
    int d3 = (n%10);
    n = n / 10;
    int d4 = (n/10);
    int sum = d1 + d2 + d3 + d4;
    printf("The sum of four digits is: %d\n", sum);
    return 0;
}