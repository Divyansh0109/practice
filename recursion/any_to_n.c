//for odd cond (n%2 !=0)
#include <stdio.h>
void Odd(int start,int end)
{
 if (start>end){
 return;}
 if (start % 2 != 0){ // odd condition
 printf("%d ",start);}
 Odd(start + 1,end);
}
int main() {
     int n;
    scanf("%d",&n);
    Odd(5,n);
    return 0;
}