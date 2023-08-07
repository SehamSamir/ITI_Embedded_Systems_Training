#include<stdio.h>
void main(void)
{
	int n;
	printf("please enter number :");
	scanf("%i",&n);
	if(n%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap");
	}
}