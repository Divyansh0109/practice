#include<stdio.h>
void count(int n)
{
    if(n==0)
    return 0;
    count(n-1);
    printf("%d ",n);   
}
int main()
{
    int n;
    scanf("%d",&n);
    count(n);
    return 0;

}