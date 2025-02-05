#include<stdio.h>
int main()
{
    char name[100];
    int age;
    char hobby[100];
    scanf("%c %d %c", &name, &age, &hobby);
    printf("Name:", name);
    printf("\nAge:", age);
    printf("\nHobby:", hobby);
}