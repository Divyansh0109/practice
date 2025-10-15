#include <stdio.h>
#include <math.h>
int main() {
    int n,digit,digitis=0,temp=0;
    double sum=01;
    printf("Enter a number: ");

    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        digitis++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum+=pow(digit,digitis);
        temp/=10;
    }
    if(sum==n)
        printf("%d is a Armstrong number\n",n);
    else
        printf("%d is not a Armstrong number\n",n);
    return 0;
}