#include<stdio.h>
void main(void)
{
	int x , x1,x2,x3;
	int years , months , days;
	printf("enter no of days");
	scanf("%i",&x);
	years =x/365;
	x1=x%365;
	months=x1/30;
	x2=x1%30;
	days=x2;
	printf("years=%i\n",years);
	printf("months=%i\n",months);
	printf("days=%i\n",days);
}
