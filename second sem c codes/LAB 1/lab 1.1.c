
#include<stdio.h>
#define pie 3.14
int main()
{
	/*To Calculate the Area of circle and Square*/
	float r,l,ac,as;
	printf("Enter the radius of Circle\n");
	scanf("%f",&r);
	printf("Enter the length of Square\n");
	scanf("%f",&l);
	ac=pie*r*r;
	as=l*l;
	printf("The area of the Circle is= %.2f\n",ac);
	printf("The area of the Square is=%.2f\n",as);
	return 0;
}

