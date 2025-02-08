#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%D %D",&a,&b);
    c=setNthBit(a,b);
    printf("%d",c);
}