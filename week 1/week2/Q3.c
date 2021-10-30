#include<stdio.h>
void main()
{
int num,flag=0,i;
printf("enter a number");
scanf("%d",&num);
for(i=2;i=num/2;++i)
{
if(num%i==0)
    flag=1;
    break;
}
if(num==1)
{
    printf("1 is not prime\n");
}
else if(flag==0)
{
printf("entered number is prime %d \n",num);
}
else
{
printf("entered number is not prime %d \n",num);
}
}

