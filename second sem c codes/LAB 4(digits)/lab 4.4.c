#include<stdio.h>
int main()
{
int n,i,count;
printf("enter number\n");
scanf("%d",&n);
do{
n=n/10;
count++;
}while(n!=0);
printf("digits are=%d",count);
return 0;
}
