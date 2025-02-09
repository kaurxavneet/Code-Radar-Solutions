#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a>=18 && b==0)
    {
        printf("Not Eligible");
    }
     if(a<18 && b==0)
    {
        printf("Not Eligible");
    }
     if(a>=18 && b==1)
    {
        printf("Eligible");
    }
     if(a>=18 && b==0)
    {
        printf("Not Eligible");
    }
     if(a<18 && b==1)
    {
        printf("Not Eligible");
    }
}