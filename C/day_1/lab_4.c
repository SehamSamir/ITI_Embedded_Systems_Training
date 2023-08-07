#include<stdio.h>
void main(void)
{
	int x=4;
	int y =7;
	int a1,a2,a3,a4,a5;
	a1=x|y;
	a2=x&y;
	a3=x^y;
	a4=x<<1;
	a5=x>>2;
	printf("a1=%i\n",a1);
	printf("a2=%i\n",a2);
	printf("a3=%i\n",a3);
	printf("a4=%i\n",a4);
	printf("a5=%i",a5);
	
}