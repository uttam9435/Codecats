#include<stdio.h>
void main()
{
    int arr[5],size,i;
    printf("enter elements of array :");
    for(i=0;i<5;++i)
    {
        scanf("%d",&arr[i]);
    }
    printf("reverse array :");
    for(i=4;i>=0;--i){
        printf("%d \t",arr[i]);
    }
}