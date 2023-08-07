#include<stdio.h>
void main(void)
{
	int i, num, sum ,avg;
	for (i=0; i<10; i++)
	{
		printf("enter the number");
		scanf("%d",&num);
		sum+=num;
	}
	avg=sum/10;
	printf("sum= %d\n",sum);
	printf("avg= %d",avg);
}