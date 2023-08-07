#include<stdio.h>
void main(void)
{
	int arr[10],i;
	int sum =0;
	for(int i=0; i<10; i++)
	{
		printf("please enter number : ");
		scanf("%d",&arr[i]);
	}
		for(int i=0; i<10; i++)
		{
			sum+=arr[i];
		}
		printf("sum=%i\n",sum);
		printf("avg=%d",sum/10);
	
}