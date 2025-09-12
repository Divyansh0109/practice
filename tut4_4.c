#include <stdio.h>
int main(){
    int price1, price2, price3, quantity1, quantity2, quantity3;
    float discount_percent, discount_amount, total;
    printf("enter price of item 1: ");
    scanf("%d", &price1);
    printf("enter quantity of item 1: ");
    scanf("%d", &quantity1);
    printf("enter price of item 2: ");
    scanf("%d", &price2);
    printf("enter quantity of item 2: ");
    scanf("%d", &quantity2);
    printf("enter price of item 3: ");
    scanf("%d", &price3);
    printf("enter quantity of item 3: ");
    scanf("%d", &quantity3);
    printf("enter discount percentage: ");
    scanf("%f", &discount_percent);
    total = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3);
    discount_amount = (discount_percent / 100) * total;
    float final_amount = total - discount_amount;
    printf("Total: %.2f\n", total);
    printf("Discount: %.2f\n", discount_amount);
    printf("Final Amount: %.2f\n", final_amount);
    return 0;
}