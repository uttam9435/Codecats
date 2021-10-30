#include<stdio.h>
void main()
{
int num,temp,rev=0;
printf("enter a number");
scanf("%d",&num);
for(;num!=0;num=num/10)
{
temp=num%10;
rev=rev*10+temp;
}
printf("reverse no is %d",rev);
}
