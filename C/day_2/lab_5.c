#include<stdio.h>
void main(void)
{
	int id;
	printf("please enter id :");
	scanf("%i",&id);
	switch (id){
		case 1234 :
		printf("welcome ahmed\n");
		break;
		case 5678 :
		printf("welcome youssef\n");
		break;
		case 1145 :
		printf("welcome mina\n");
		break;
	default:
		printf("wrong id");
		break;
	}
}