#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    c=(a>>b)&1;
    printf("%d",c);
}