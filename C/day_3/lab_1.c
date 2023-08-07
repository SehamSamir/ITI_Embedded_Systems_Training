#include<stdio.h>
int max(int x , int y);
void main(void)
{
	int x,y;
	printf("please enter number_1 :");
	scanf("%d",&x);
	printf("please enter number_2 :");
	scanf("%d",&y);
	printf("%d\n", max(x,y));
}
int max(int x , int y)
{
if (x>y)
{
	printf("number_1 is max  %d",x);

}
else
{
	printf("number_2 is max  %d",y);
}
}