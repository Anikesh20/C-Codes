#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char str[30];
printf("Enter the uppercase string:");
gets(str);
strlwr(str);
puts(str);
getch();
}

