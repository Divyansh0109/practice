#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)// for rows like we have put 3  print 7
    {
        for(j=1;j<=2*n+1;j++)// create a square of 7*7
        {
            if(i==n+1 || j==n+1)//i=middle row and j=middle column
            {
                printf("+");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }   
    return 0;
}