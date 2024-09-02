#include<stdio.h>
#include<conio.h>
int fact(int n);
int main(){
int num,res;
printf("Enter positive integer:");
scanf("%ld",&num);
res=fact(num);
printf("%d=%d",num,res);
getch();
}
 fact(int n){
int f=1;
if(n<=0) {
return(1);
}
else{
f=n*fact(n-1);
return(f);
}
}
