#include<stdio.h>
int main(){
    int item,quantity;
    printf("Select the items from the menu\n");
    printf(" 1. Burger 85rs\n 2. Pizza 125rs\n 3. Sandwich 60rs\n 4. Lassi 40rs\n");
    printf("Enter what you want to order (only serial no.) : ");
    scanf("%d",&item);
    

    switch(item)
    {
        case 1 : printf("Enter the quantity of Burger :");
                 scanf("%d",&quantity);
                 printf("Total Payable amount :%d" ,85*quantity);break;
        case 2 : printf("Enter the quantity of Pizza :");
                 scanf("%d",&quantity);
                 printf("Total Payable amount :%d" ,125*quantity);break;
        case 3 : printf("Enter the quantity of Sandwich :");
                 scanf("%d",&quantity);
                 printf("Total Payable amount :%d" ,60*quantity);break;
        case 4 : printf("Enter the quantity of Lassi :");
                 scanf("%d",&quantity);
                 printf("Total Payable amount :%d" ,40*quantity);break;
        default : printf("Invalid Item input");
    }
return 0;
}
