#include<stdio.h>
int main()
{
	char input;
	printf("enter H for head and T for tail:");
	scanf("%c",&input);
	if(input==72)
	{
		printf("head");
	}
	else
	{
		printf("tail");
	}
	return 0;
}