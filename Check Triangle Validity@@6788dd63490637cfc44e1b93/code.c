#include<stdio.h>
int main()
{
    float a;
    float b;
    float c;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c) && (a+c>b)&& (b+a>a))
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}