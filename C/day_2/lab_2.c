#include<stdio.h>
void main(void)
{
   	int hours , salary;
	printf("please enter your working hours: ");
	scanf ("%d",&hours);

	if (hours>=50)
    {
		salary=hours*50;
		printf("salary=%d",salary);
	}
	if (hours<40)
    {
        salary=(hours*50);
        salary-=salary*0.1;

	}

}