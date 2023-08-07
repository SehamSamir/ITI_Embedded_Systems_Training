#include<stdio.h>
void main(void)
{
	int id, pass, i;
	printf("please enter id : ");
	scanf("%d",&id);
	switch (id)
	{
		default :
		printf ("wrong password");
		break ;
	case 1234 :
		printf("password :");
		scanf("%d",&pass);
		if (pass==321)
		{
			printf("welcom seham");
		}
		else{
			printf("try again");
			
		}
	}
	
}