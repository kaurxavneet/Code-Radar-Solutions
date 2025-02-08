#include<stdio.h>
int main()
{
    int a;
    int count=0;
    scanf("%d", &a);
    while((a&1)==0 && a!=0)
    {
        count++;
        a>>=1;
    }
    printf("%d", count);
}