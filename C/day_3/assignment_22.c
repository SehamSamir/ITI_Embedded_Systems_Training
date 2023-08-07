#include<stdio.h>
void main(void)
{
	int class_1[10]={20,50,66,54,78,56,87,88,64,73};
	int class_2[10]={40,50,60,84,75,58,78,66,49,89};
	int class_3[10]={70,80,65,54,87,67,87,88,64,53};
	int i=0;
	int pass=0, faild=0;
	int avg_1=0, avg_2=0, avg_3=0, avg=0;
	int sum_1=0, sum_2=0, sum_3=0, sum=0;
	int max_1=0, max_2=0, max_3=0, max=0;
	for(i=0; i<10; i++)
	{
		sum_1=sum_1+class_1[i];
		if(class_1[i]>=50)
		{
			pass++;
		}
		else if (class_1[i]<50)
		{
			faild ++;
		}
		if(max<class_1[i])
		{
			max=class_1[i];
		}
		
	}
		for(i=0; i<10; i++)
	{
		sum_1=sum_2+class_2[i];
		if(class_2[i]>=50)
		{
			pass++;
		}
		else if (class_2[i]<50)
		{
			faild ++;
		}
		if(max<class_2[i])
		{
			max=class_2[i];
		}
		
	}
		for(i=0; i<10; i++)
	{
		sum_1=sum_3+class_3[i];
		if(class_3[i]>=50)
		{
			pass++;
		}
		else if (class_3[i]<50)
		{
			faild ++;
		}
		if(max<class_3[i])
		{
			max=class_3[i];
		}
		
	}
	if((max_1>max_2)&&(max_1>max_3))
	{
		printf("highest grade =%d\n",max_1);
	}
	else if((max_2>max_1)&&(max_2>max_3))
	{
		printf("highest grade =%d\n",max_2);
	}
	else
	{
		printf("highest grade =%d\n",max_3);
	}
	printf("number of pass =%d\n",pass);
	printf("number of faild=%d\n",faild);
	printf("total avg =%d\n",(sum_1+sum_2+sum_3)/30);
	
}