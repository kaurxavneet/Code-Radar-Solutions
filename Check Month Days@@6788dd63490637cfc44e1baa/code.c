#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case1:
        case3:
        case5:
        case7:
        case8:
        case10:
        case12:
        printf("31");
        break;
        case4:
        case6:
        case9:
        case11:
        printf("30");
        break;
        case2:
        printf("28");
        default:
        printf("Invalid month");

    }
}