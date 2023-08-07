#include<stdio.h>
void main(void)
{
	int id, pass;
	printf("Please Enter ID : ");
	scanf("%d",&id);
	if (id==1234)
	{
		printf("Please Enter Password : ");
		scanf("%d",&pass);
		if (pass==5678)
		{
			printf("seham");
		}
		else
        {
            printf("Incorrect Password");
		}
	}
	else
	{
		printf("Incorrect ID");
	}
}