#include<stdio.h>
void convertToBinary(int a)
{
    for(int i=31; i>=0; i--)
    {
        printf("%d",(a>>i)&1);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    convertToBinary(a);
}