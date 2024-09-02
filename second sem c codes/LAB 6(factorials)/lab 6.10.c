#include<stdio.h>
#include<conio.h>
void display(int *x);
int main(){
int a=100;
display(&a);
printf("%d",a);
}
void display(int *x){
*x=*x+100;
}

