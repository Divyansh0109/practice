#include <stdio.h>
int Pailndrome(int n,int rev)
{
    if (n==0)
    return rev;
    return Pailndrome(n/10, rev * 10 + n % 10);

}
int main() {
    int n,pailn;
    scanf("%d",&n);
    pailn = Pailndrome(n,0);
    if (n == pailn)
    printf("Pilndrom");
    else
    printf("not pailndrom");   
    return 0;
}