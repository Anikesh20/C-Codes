#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	if(n%2==0)
	printf("The number %d is an even number\n",n);

	if(n%2!=0)
	printf("The number %d is an odd number\n",n);
	
	return 0;
}

