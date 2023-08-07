#include<stdio.h>
void main(void)
{
	int i, j, h;
	printf("please enter the hight : ");
	scanf("%d",&h);
	for(i=1; i<=h; i++)
	{
		for(j=1;j<=h-i;j++)
        {
            printf(" ");
        }

        for (j=1; j<=((2*i)-1); j++)
            {
                printf("*");


            }
        printf("\n");
        }

	}
