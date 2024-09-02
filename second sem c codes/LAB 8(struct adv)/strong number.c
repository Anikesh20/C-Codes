#include<stdio.h>
int factorial(int);
int main()
{
 int fact=1,sum=0;
 int r,i;
 printf("\n Strong numbers are :");
 for(i=1;i<=1000;i++){
 int k=i;
 while(k!=0){
 r=k%10;
 fact=factorial(r);
 k=k/10; 
 sum=sum+fact;
 }
 if(sum==i){
 printf("%d, ",i);

 }
 sum=0;
 }
 return 0;
}
int factorial(int f)
 {
 int mul=1,i;
 for(i=1; i<=f;i++){
 mul=mul*i;
 }
 return mul;
 }
