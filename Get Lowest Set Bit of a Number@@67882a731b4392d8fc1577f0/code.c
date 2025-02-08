#include<stdio.h>
int main()
{
    int a;
    int b=0;
    int c;
    scanf("%d",&a);
    while((a&1)==0)
    {
        a=a>>1;
        b++;
    }
    printf("%d",b);

}