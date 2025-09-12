#include<stdio.h>
#include<math.h>
int main()
{
int a = 2, b = 3, c = 5;
int t1, t2, t3,result;
t1 = (a | ~b) & (a | c);
t2 = a & b & c;
t3 = b & c;
result = t1|t2|t3;
printf("result = %d\n", result);

return 0;
}