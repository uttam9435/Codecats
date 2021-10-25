#include<stdio.h>
main(){
    int x,y;
    printf("enter two nos");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("no x is greater than y",x);
    }
    else
    {
        printf("no y is greater than x",y);
    }
}