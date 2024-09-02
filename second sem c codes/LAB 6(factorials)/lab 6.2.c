#include<stdio.h>
#include<conio.h>
int main()
{
int n,b,i,sum=0;
printf("Enter number:\n");
scanf("%d",&n);
for(i=0;i<=n;i++){
	sum=sum+i;
	b=sum*sum;
}
printf("sum of natural number=%d",b);
return 0;
}
