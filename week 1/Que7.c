#include<stdio.h>
int main()
{
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if(c>='a' && c<='z')
    {
        printf("entered character is small letter",c);
    }
    else if(c>='0' && c<='9')
    {
        printf("entered character is digit ",c);
    }
    else if(c>='A' && c<='Z')
    {
        printf("entered character is capital letter",c);
    }
    else{
        printf("entered character is special letter",c);
    }
}