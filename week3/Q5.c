#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,size,a[10];
    int even=0,odd=0,total_sum=0,sum_evenpos=0,sum_oddpos=0;
    printf("\nenter size of an array ");
    scanf("%d",&size);
    printf("\nenter the elements of array\n");
    for(i=0;i<size;++i)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<size;++i)
    {
        total_sum=total_sum+a[i];
    }
    for(i=1;i<size;i=i+2)
    {
       sum_evenpos=sum_evenpos+a[i];
    }
    for(i=0;i<size;i=i+2)
    {
         sum_oddpos=sum_oddpos+a[i];
    }
    for(i=0;i<size;++i)
    {
        if(a[i]%2==0)
        {
           even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    printf("total sum of elements are %d \n",total_sum);
    printf("sum of all even elements are %d\n",even);
    printf("sum of all odd elements are %d\n",odd);
    printf("sum of elements on even position are %d \n",sum_evenpos);
    printf("sum of elements on odd position are %d \n",sum_oddpos);
}
