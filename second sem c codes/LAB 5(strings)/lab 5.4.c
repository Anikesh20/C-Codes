#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
printf("\n\n\t\tStudytonight-Bestplace to learn\n\n\n");
char number[10];
int flag=0;
int length,i=0;
printf("\n\nEnter a number:");
scanf("%s",number);
length=strlen(number);
//till string does not end
while(number[i++]!='\0')//same as
while(length-->0)
{
if(number[i]=='.')//decimalpoint is present
{
flag=1;
break;
}
}
//if(0) is same as if(false)
if(flag)
printf("\n\n\n\tEntered number is a floating point number\n\n");
else
printf("\n\n\n\tEntered number is a integer number\n\n");
printf("\n\n\n\n\t\t\tCoding is fun!\n\n\n");
return 0;
}
