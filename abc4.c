#include<stdio.h>
int main(){
     int n,i,j,a;
     printf("Enter n :");
     scanf("%d",&n);

    for(a=1;a<=n;a++){
     for(i=1;i<=3;i++)
     {
         for(i=1;i<=n;i++){
            printf("*");}

          printf("\033[0;34m+\033[0m");  // Blue color for +

         for(i=1;i<=n;i++){
            printf("*");}

      printf("\n");
     }
    }

    for(i=1;i<=2*n+1;i++){
        printf("\033[0;34m+\033[0m");}  // Blue color for +
        printf("\n");
        
     for(a=1;a<=n;a++){
     for(i=1;i<=3;i++)
     {
         for(i=1;i<=n;i++){
            printf("*");}

          printf("\033[0;34m+\033[0m");  // Blue color for +

         for(i=1;i<=n;i++){
            printf("*");}

      printf("\n");
     }
    }

    return 0;
}