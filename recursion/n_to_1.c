#include <stdio.h>
void Revresecount(int n)
{
    if(n==0)
    return 0;
    
    printf("%d ",n);
    Revresecount(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    Revresecount(n);
    return 0;
}