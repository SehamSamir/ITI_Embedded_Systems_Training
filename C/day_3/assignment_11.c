#include<stdio.h>
int max(int i);
void main(void)
{
	int arr[10],i;
	for(int i=0; i<10; i++)
	{
		printf("please enter number : ");
		scanf("%d",&arr[i]);

	}
	max(i);
}
int max(int i)
{

    int arr[i];
	for(i=0; i<10; i++)
	{
		if (arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("max is %d\n",&arr[i]);
}
