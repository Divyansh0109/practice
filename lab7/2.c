
#include <stdio.h>
int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    printf("Enter base and power: ");
    scanf("%d %d", &x, &y);
    int result = power(x, y);
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}