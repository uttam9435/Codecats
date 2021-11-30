#include<stdio.h>
void main()
{
    int x[100],num,cnt=0,i,size;
    printf("enter array size");
    scanf("%d",&size);
    for(i=0;i<size;++i)
    {
        scanf("%d",&x[i]);
    }
    printf("enter a no to search: ");
    scanf("%d",&num);
    for(i=0;i<size;++i)
    {
        if(x[i]==num)
        {
            ++cnt;
        }
    }
    printf("%d occurs %d times",num,cnt);
}