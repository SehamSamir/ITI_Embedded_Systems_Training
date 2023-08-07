#include<stdio.h>
void main(void)
{
	int arr[10],i;
	for(int i=0; i<10; i++)
	{
		printf("please enter number : ");
		scanf("%d",&arr[i]);
	}
		for(int i=9; i>=0; i--)
		{
				printf("%d\n",arr[i]);
		}
	
}