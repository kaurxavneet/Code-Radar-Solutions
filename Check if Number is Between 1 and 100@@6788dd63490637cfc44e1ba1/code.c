#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=100)
    {
        printf("Inclusive");
    }
    else
    {
        printf("Out of Range");
    }
}