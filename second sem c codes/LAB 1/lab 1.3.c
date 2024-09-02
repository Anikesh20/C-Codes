#include<stdio.h>
int main()
{
	int SP,CP,profit,loss;
	printf("Enter the values of SP and CP\n");
	scanf("%d%d",&SP,&CP);
	if(SP>CP)
	{
		profit=SP-CP;
		printf("The Profit is= %d",profit);
	}
	if(CP>SP)
	{
		loss=CP-SP;
		printf("The Loss=is %d",loss);
	}
	return 0;
	}

