                
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two no. \n");
	scanf("%d%d",&a,&b);
	//for AND
	printf(" AND output=%d \n ",a&b);
	// for OR
	printf("OR output=%d \n",a|b);
	//for XOR
	printf("XOR output=%d",a^b);
	return 0;
	}

