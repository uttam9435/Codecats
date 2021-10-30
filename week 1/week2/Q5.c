/*armstrong number*/
#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    for(;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }
    if(temp==sum)
    printf("number is armstrong %d",temp);
    else
    printf("number is not armstrong %d",temp);
}