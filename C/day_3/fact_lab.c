#include<stdio.h>
int fact(int num);
void main(void)
{
	int num;
	printf("please enter number : ");
	scanf("%d",&num);
	printf("the fact is=%i ",fact(num));
	
}
int fact(int num)
{
	if (num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}