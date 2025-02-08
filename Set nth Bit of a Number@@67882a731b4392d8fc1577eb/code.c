#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    b|= (1<<a);
    printf("%d",b);
}