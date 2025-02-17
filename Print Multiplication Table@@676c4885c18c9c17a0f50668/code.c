#include<stdio.h>
int main()
{
	int i;
    int a;
    scanf("%d",&a);
	while(i<=10)
	{
		printf("\n %d x %d = %d",a,i,a*i);
		i++;
	}
	return 0;
}