#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if(i<(n+1)/2 && j<(n+1)/2)
                printf("*");
            else if (i<(n+1)/2 && j>(n+1)/2)
                printf("%d",i);
            else if (i>(n+1)/2 && j<(n+1)/2)
                printf("%c",96+i-(n+1)/2);
            else if (i>(n+1)/2 && j>(n+1)/2)
                printf("%c",91-i+(n+1)/2);
            else if (i==(n+1)/2 || j==(n+1)/2)
                printf("+");
        }
        printf("\n");
    }
}