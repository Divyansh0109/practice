#include <stdio.h>
int Even(int start,int end)
{
    if(start>end)
    return 0;
    if (start%2==0)
    printf("%d ",start);
    Even(start+1,end);
}
int main() {
    int n;
    scanf("%d",&n);
    Even(2,n);
    return 0;
}