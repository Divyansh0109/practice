#include <stdio.h>
int main() {
    float m,cm;
    printf("Enter the value in meters: ");
    scanf("%f", &m);
    cm = m * 100;
    printf("The value in centimeters is: %.2f cm\n", cm);
    return 0;
}