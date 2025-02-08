#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    b= sizeof(int) * 8;
    if(a&(1<<(b-1)))
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}