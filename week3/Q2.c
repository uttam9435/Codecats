#include<stdio.h>
void main()
{
   int i,j,k,n;
   printf("enter no of rows");
   scanf("%d",&n);
   for(i=n;i>=0;--i)
   {
      for(j=n;j<0;--j)
      {
        printf(" \t");
      }
      for(k=0;k<=i;++k)
      {
          printf("*\t");
      }
      printf("\n");
   }
}
