#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter three nos");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
        printf("no x is greater than no y",x);
    }
    else if(y>z)
    {
        printf("no y is greater than no z",y);
    }
    else{
        printf("no z is greater than x & y",z);

    }
}