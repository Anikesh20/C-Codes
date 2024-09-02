#include<stdio.h>
#include<conio.h>
void display(int n);
int main(){
int n=7;
display(n);
}
void display(int n){
if(n<1)
return;
else{
printf("%d",n);
display(n-1);
printf("%d",n);
}
}

