#include <stdio.h>

int main() {
    int n, i = 1;
    long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n < 0)
        goto error;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %lld\n", n, fact);
    return 0;

error:
    printf("Factorial not defined for negative numbers.\n");
    return 1;
}
