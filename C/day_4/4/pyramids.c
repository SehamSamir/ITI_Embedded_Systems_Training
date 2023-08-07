#include <stdio.h>
#include <stdlib.h>

int main()
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

        for (j=1; j<=i; j+=2)
            {
                printf("*");


            }
        printf("\n");
        }

	}
    //return 0;

