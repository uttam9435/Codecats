#include<stdio.h>
void main()
{
    int y;
    printf("enter a year");
    scanf("%d",&y);
    if(y%400==0)
    {
        printf("year is leap",y);
    }
    else if(y%100==0)
    {
        printf("year is not leap",y);
    }
    else if(y%4==0)
    {
        printf("year is leap",y);
    }
    else
    {
        printf("year is not leap",y);
    }
}