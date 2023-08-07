#include<stdio.h>
int x=10;
int y=20; // x&y are global variable
void swap();
void main(void)
{
	printf("x before swap =%d\n",x);
	printf("y before swap =%d\n",y);
	swap();
	printf("x after swap =%d\n",x);
	printf("y after swap =%d\n",y);
}
void swap()
{
	int z =x; // z is temproary
	x=y;
	y=z;
}