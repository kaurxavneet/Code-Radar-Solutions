#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    if(b>c && b>a)
    {
        printf("%d",b);
    }
    else{printf("%d",c);}
    return 0;
}