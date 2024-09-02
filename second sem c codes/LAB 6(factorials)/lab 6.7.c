#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char str[30];
printf("Enter the lowercase string");
gets(str);
strupr(str);
puts(str);
getch();
}
