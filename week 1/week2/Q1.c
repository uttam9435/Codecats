#include<stdio.h>
void main()
{
int i,n,sum=0,e=0,o=0;
printf("enter number");
scanf("%d",&n);
printf("\n the first %d natural numbers are \n",n);
for(i=1;i<=n;++i)
{
printf("%d\t",i);
sum=sum+i;
if((i&1)==0)
{
    e=e+i;
}
else
{
    o=o+i;
}
}
printf("sum is %d \n",sum);
printf("sum of all odd number is %d\n",o);
printf("sum of all even number is %d\n",e);
}
