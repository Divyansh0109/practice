#include <stdio.h>
int main(){
    int amount, n100, n50, n10;

    printf("Enter the withdrawal amount: ");
    scanf("%d", &amount);

    n100 = amount / 100;
    amount = amount % 100;

    n50 = amount / 50;  
    amount = amount % 50;

    n10 = amount / 10;  
    amount = amount % 10;

    printf("Number of 100 Rs notes = %d\n", n100);
    printf("Number of 50 Rs notes = %d\n", n50);
    printf("Number of 10 Rs notes = %d\n", n10);

    return 0;
}

