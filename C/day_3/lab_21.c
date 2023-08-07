#include<stdio.h>
void main(void)
{
	int n1, n2, n3;
	printf("please enter the first number : ");
	scanf("%d",&n1);
	printf("please enter the second  number : ");
	scanf("%d",&n2);
	printf("please enter the third number : ");
	scanf("%d",&n3);
	if ((n1>n2)&&(n1>n3))
	{
		printf("n1 is maximum");
	}
	else if ((n2>n1)&&(n2>n3))
	{
		printf("n2 is maximum");
	}
	else
	{
		printf("n3 is maximum");
	}
}