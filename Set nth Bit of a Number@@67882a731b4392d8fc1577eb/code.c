#include<stdio.h>
int setNthBit(int a; int b)
{
    return a | (1<<a); 
    }
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    c=setNthBit(a,b);
    printf("%d",c);
}