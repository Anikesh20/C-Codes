#include<stdio.h>
int main()
{
int marks;
	printf("Enter the marks obtained\n");
	scanf("%d",&marks);
	if(marks<=100&&marks>=90)
		printf("The obtained Grade is A+");
	
	if(marks<=90&&marks>80)
		printf("The obtained Grade is A");	
	
	if(marks<=80&&marks>70)
		printf("The obtained Grade is B+");
	
	if(marks<=70&&marks>60)
		printf("The obtained Grade is B");
	
	if(marks<=60&&marks>50)
		printf("The obtained Grade is C+");
		
	if(marks<=50&&marks>40)
		printf("The obtained Grade is C");
		
	if(marks<=40&&marks>30)
		printf("The obtained Grade is D+");
		
	if(marks<=30&&marks>20)
		printf("The obtained Grade is D");
		
	if(marks<=20&&marks>=0)
	printf("The obtained Grade is E");
	
	return 0;
	}

