#include<stdio.h>
#include<string.h>
int main()
{
/* this array can hold a string upto
25
*chars,if you are going to enter
large string
*then increase the array size
accordingly
*/
char str[25];
int i;
printf("enter the string:");
scanf("%s",str);
strlwr(str);
printf("\n lower case string is:%s",str);
return 0;
}
