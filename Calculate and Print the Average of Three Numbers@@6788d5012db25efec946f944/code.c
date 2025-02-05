#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int total;
    float avg;
    scanf("%d %d %d", &a, &b, &c);
    total= (a+b+c);
    avg= total/3;
    printf("Average: %.2f", avg);
}