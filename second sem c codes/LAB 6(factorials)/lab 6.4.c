#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main(){
int x,y,sum;
printf("Enter two number:\n");
scanf("%d%d",&x,&y);
sum=add(x,y);
printf("Sum=%d",sum);
getch();
}
int add(int a,int b)
{
	int sum;
sum=a+b;
return sum;
}
