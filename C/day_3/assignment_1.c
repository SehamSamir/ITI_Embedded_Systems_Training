#include<stdio.h>
int max(int n1, int n2, int n3, int n4);
int min(int n1, int n2, int n3, int n4);
void main(void)
{
	int n1, n2, n3, n4;
	printf("Please Enter The First Number :");
	scanf("%d",&n1);
	printf("Please Enter The Second Number :");
	scanf("%d",&n2);
	printf("Please Enter The Third Number :");
	scanf("%d",&n3);
	printf("Please Enter The forth Number :");
	scanf("%d",&n4);
	max(n1, n2, n3, n4);
	min(n1, n2, n3, n4);
}
int max(int n1, int n2, int n3, int n4)
{
	if ((n1>n2)&&(n1>n3)&&(n1>n4))
	{
		printf ("The maximum number is n1 %d\n",n1);
	}
	else if  ((n2>n1)&&(n2>n3)&&(n2>n4))
	{
		printf ("The maximum number is n2 %d\n",n2);
	}
	else if  ((n3>n1)&&(n3>n2)&&(n3>n4))
	{
		printf ("The maximum number is n3 %d\n",n3);
	}
	else
	{
		printf ("The maximum number is n4 %d\n",n4);
	}

}
int min(int n1, int n2, int n3, int n4)
{
	if ((n1<n2)&&(n1<n3)&&(n1<n4))
	{
		printf ("The minimum number is n1 %d\n",n1);
	}
	else if  ((n2<n1)&&(n2<n3)&&(n2<n4))
	{
		printf ("The minimum number is n2 %d\n",n2);
	}
	else if  ((n3<n1)&&(n3<n2)&&(n3<n4))
	{
		printf ("The minimum number is n3 %d\n",n3);
	}
	else
	{
		printf ("The minimum number is n4 %d\n",n4);
	}

}

