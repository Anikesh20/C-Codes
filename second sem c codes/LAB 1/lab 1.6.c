#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age\n");
	scanf("%d",&age);
	if(age>=18)
		printf("You are eligible to vote");
	if(age<18)	
		printf("You are not eligible to vote");
	
	return 0;
	}

