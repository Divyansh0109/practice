// sum of series of sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
#include <stdio.h>
#include<math.h>
double fact(int n) 
{
    double f = 1.0;
    for (int i = 1; i <= n; i++) {
     f *= i;
    }
    return f;
}
int main(){
    int terms, k;
    double x, P = 0.0, N = 0.0;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++) {
        k = 2*i-1;
        if (i % 2 == 0) {
            P += pow(x, k) / fact(k);
        } else {
            N += pow(x, k) / fact(k);
        }
    }
    printf("sum of series sin(%f) ≈ %f\n", x, P - N);
    return 0;
}
