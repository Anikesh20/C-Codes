#include<stdio.h>
#include<conio.h>
int main(){
int x,y;
void add(int a,int b);
printf("Enter two number:\n");
scanf("%d%d",&x,&y);
add(x,y);
getch();
return 0;
}
void add(int a,int b)
{
int sum;
sum=a+b;
printf("sum=%d",sum);
}
