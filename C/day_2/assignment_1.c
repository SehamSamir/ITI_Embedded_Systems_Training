#include<stdio.h>
void main(void)
{
	int n1, n2, sum;
	for( ; ; )
	{
		printf("please enter the first number : ");
		scanf("%d",&n1);
		printf("please enter the second number : ");
		scanf("%d",&n2);
		printf("sum=%d\n",(n1+n2));
	}
}