
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	if(n>=0)
		printf("The number %d is a positive number",n);
	if(n<0)	
		printf("The number %d is a negative number",n);
	
	return 0;
	}

