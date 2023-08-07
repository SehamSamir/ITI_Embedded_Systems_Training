#include<stdio.h>
void main(void)
{
	int n1, n2;
	printf("enter number1: ");
	scanf("%d",&n1);
	printf("enter number2: ");
	scanf("%d",&n2);
	printf("set bit=%d\n",(n1|(1<<n2)));
	printf("clear bit=%d\n",(n1&(~(1<<n2))));
	printf("toggle bit=%d\n",(n1^(1<<n2)));
	printf("get bit=%d\n",((n1>>n2)&1));
	
}