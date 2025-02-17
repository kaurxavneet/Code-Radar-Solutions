#include<stdio.h>
int main()
{
	int i=1;
    int a;
    scanf("%d",&a);
	while(i<=10)
	{
		printf("\n %d x %d = %d\n",a,i,a*i);
		i++;
	}
	return 0;
}