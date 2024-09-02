#include<stdio.h>
int main(){
int unit;
float amt,total,tax;
printf("Enter total units consumed: ");
scanf("%d",&unit);
if(unit<=30)
{
	amt=80;
}
if(unit>30&&unit<=100)
{
	amt=80+(unit-30)*7;

}
 if(unit>100&&unit<=200)
{
	amt=570+(unit-100)*7.5;

}
if(unit>200){

  amt=1320+(unit-200)*8.5;
}
 tax=amt*0.15;
total=amt+tax;
printf("Electricity bill = RS. %.2f",total);
return 0;
}

