#include<stdio.h>
void main(void)
{
	int x=0;
	int y=0;
	int sum=0;
	int mul=0;
	printf("enter the first number");
	scanf("%d",&x);
	printf("enter the second number");
	scanf("%d",&y);
	sum = x+y;
	mul = x*y;
	printf("sum=%i\n",sum);
	printf("mul=%i\n",mul);
}