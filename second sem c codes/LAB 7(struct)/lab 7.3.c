#include<stdio.h>
#include<conio.h>
struct student{
char name[30];
int age;
int rollno; float
marks[6];
};
int main(){
struct student s;
int i;
float avg,sum=0;
printf("Enter name\n");
scanf("%s",&s.name);
printf("Enter age\n");
scanf("%d",&s.age);
printf("Enter rollno\n");
scanf("%d",&s.rollno);
printf("Enter 6 subjects marks\n");
for(i=0;i<6;i++){
scanf("%f",&s.marks[i]);
sum=sum+s.marks[i];
avg=sum/6.0;
}
printf("The details are\n");
printf("%s\n%d\n%d\n%f",s.name,s.age,s.rollno,avg);
getch();
}
