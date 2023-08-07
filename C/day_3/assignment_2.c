#include<stdio.h>
int fun( int id);
void main(void)
{
	int id, op, op_1, op_2 ,out;

	printf("Please Enter ID : ");
	scanf("%d",&id);
	if (id<=11)
    {
        printf("Please Enter Number of Operand is One or Two : ");
        scanf("%d",&op);
        if (op==1)
        {
            printf("Please Enter op_1 : ");
            scanf("%d",&op_1);
        }
        else if (op ==2)
        {
            printf("Please Enter op_1 : ");
            scanf("%d",&op_1);
            printf("Please Enter op_2 : ");
            scanf("%d",&op_2);
        }
        else
        {
            printf("wrong op");
        }
    }
    else
    {
        printf("wrong id");
    }

    fun(id);



}
int fun(int id)
{
	int op_1,op_2,op;
	int add, sub, mul, div, and, or, not, xor, remin, inc, dec;
	switch (id)
	{
		case 1 :
		if (op==2)
		{
			add=op_1+op_2;
			printf("add=%d\n",add);
		}
		if (op==1)
		{
			printf("wrong op");
		}
		break;
		case 2 :
		if (op==2)
		{
			sub=op_1-op_2;
			printf("sub=%d\n",sub);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 3 :
		if (op==2)
		{
			mul=op_1*op_2;
			printf("mul=%d\n",mul);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 4 :
		if (op==2)
		{
			div=op_1/op_2;
			printf("div=%d\n",div);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 5 :
		if (op==2)
		{
			and=op_1&op_2;
			printf("and=%d\n",and);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 6 :
		if (op==2)
		{
			or=op_1|op_2;
			printf("or=%d\n",or);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 7 :
		if (op==1)
		{
			not=~op_1;
			printf("not=%d\n",not);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 8 :
		if (op==2)
		{
			xor=op_1^op_2;
			printf("xor=%d\n",xor);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 9 :
		if (op==2)
		{
			remin=op_1%op_2;
			printf("remin=%d\n",remin);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 10 :
		if (op==1)
		{
			inc=++op_1;
			printf("inc=%d\n",inc);
		}
		else
		{
			printf("wrong op");
		}
		break;
		case 11 :
		if (op==1)
		{
			dec=--op_1;
			printf("dec=%d\n",dec);
		}
		else
		{
			printf("wrong op");
		}
		break;
	}
}
