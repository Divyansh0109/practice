#include<stdio.h>
#include<math.h>
int main()
{
    int a = 2, b = 3 ,c=5;
    double t1 = 2*a *(log10(4*pow(a,2)/b));
    double t2 = fabs(pow(b,2) - pow(c,2));
    double t3 = 5*sqrt(c);
    double t4 = cos(30*(3.14/180));

    double t5 = t1 + t2 - t3 + t4;
    printf("The final result is: %lf\n", t5);
    return 0;
}