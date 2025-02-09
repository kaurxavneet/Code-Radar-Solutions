#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(tolower(a)=='a'||tolower(a)=='e'||tolower(a)=='i'||tolower(a)=='o'||tolower(a)=='u')
    {
        printf("Vowel");
    }
    else if(isdigit(a))
    {
        printf("Digit");
    }
    else if(isalpha(a))
    {
        printf("Constant");
    }
    else
    {
        printf("Special Character");
    }
}