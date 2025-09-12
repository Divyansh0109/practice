#include<stdio.h>
int main (){
    int cp, sp,l, p;
    char name[50];
    printf("enter the name:");
    fgets(name, sizeof(name), stdin);
    printf("enter the price:");
    scanf("%d", &cp);
    printf("enter the selling price:");
    scanf("%d", &sp);
    l = cp - sp;
    p= sp-cp;
    float profitPer = (float)p / cp * 100;
    printf("_______________________________________________________________________\n");
    printf("name:%s", name);
    printf("\tcost price:%d", cp);
    printf("\t  selling price:%d", sp);
    printf("\t   loss:%d", l);
    printf("\t   profit percentage:%.2f\n", profitPer);
    printf("_______________________________________________________________________\n");
    return 0;
}