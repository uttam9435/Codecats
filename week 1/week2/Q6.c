/*find power of a number*/
#include<stdio.h>
#include<math.h>
void main()
{
    int base,exp,r;
    printf("enter base number");
    scanf("%d",&base);
    printf("enter exponent");
    scanf("%d",&exp);
    r=pow(base,exp);
    printf("result=%d",r);
}
