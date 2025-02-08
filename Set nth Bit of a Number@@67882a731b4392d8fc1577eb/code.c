#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    c=setNthBit(a,b);
    printf("%d",c);
}