#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,disc;
float x,y;
printf("enter coefficient of x^2,x and constant terms:\n");
scanf("%d%d%d",&a,&b,&c);
disc=b*b-4*a*c;
if(disc>0){
	printf("roots are equal and distinct\n");
x=-b+sqrt(disc)/(2*a);
y=-b-sqrt(disc)/(2*a);
printf("\nroots are:%f%f",x,y);
}
 else if(disc==0){
printf("both roots are equal\n");
x=-b/(2.0*a);
y=-b/(2.0*a);
printf("root is %f%f",x,y);
}
else
 printf("both roots are imaginary");
return 0;
}

