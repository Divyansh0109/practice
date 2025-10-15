#include <stdio.h>

int main() {
     int a,b,g,GCD=0,LCM=0;
     printf("Enter two numbers: ");
     scanf("%d %d",&a,&b);
     int min=(a<b)?a:b;
        for(g=1;g<=min;g++)
        {
            if(a%g==0 && b%g==0)
            {
                GCD=g;
            }
        }
    LCM=(a*b)/GCD;
    printf("GCD of %d and %d is %d\n", a, b, GCD);
    printf("LCM of %d and %d is %d\n", a, b, LCM);
    return 0;
}