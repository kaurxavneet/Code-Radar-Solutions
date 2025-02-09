#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    b=(int)sqrt(a);
    if(b*b==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
}