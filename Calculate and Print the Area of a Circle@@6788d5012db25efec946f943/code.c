#include<stdio.h>
int main()
{
    float radius;
    float area;
    scanf("%f", &radius);
    scanf("%f", &area);
    area= 3.14 * radius * radius;
    printf("Area:", area);
}