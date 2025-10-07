#include<stdio.h>
#include<math.h>
int main() {
    int n,digit,digits=0,sum=0,temp=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        digits++;
        temp = temp/10;
    }
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit,digits);
        temp = temp/10;
    }
    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not a Armstrong Number");
        
return 0;
}