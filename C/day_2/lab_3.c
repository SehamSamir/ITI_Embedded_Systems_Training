#include<stdio.h>
void main(void)
{
	int x;
	printf("please enter number :");
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}