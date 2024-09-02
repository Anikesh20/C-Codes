#include<stdio.h>
#include<stdlib.h>
int main()
{
int
rollno,std,maths,science,english,nepali,computer;
char
name[30],school_name[30];
printf("Enter your roll no:");
scanf("%d",&rollno);
printf("Enter your name:");
scanf("%s",&name);
printf("Enter your school name:");
scanf("%s",&school_name);
printf("Enter your standard:");
scanf("%d",&std);
printf("Enter marks of maths :");
scanf("%d",&maths);
printf("Enter marks of science:");
scanf("%d",&science);
printf("Enter marks of english:");
scanf("%d",&english);
printf("Enter marks of nepali:");
scanf("%d",&nepali);
printf("Enter marks of computer:");
scanf("%d",&computer);
printf("==========================================================\n");
printf("MARKSHEET OF STANDARD %d,%s\n",std,school_name);
printf("==========================================================\n");
printf("Roll No: %d Student name %s\n",rollno,name);
printf("--------------------------------------\n");
printf("SUBJECT\t\t\tMARKS\n");
printf("--------------------------------------\n");
printf("Maths\t\t\t%d\n",maths);
printf("Science\t\t\t%d\n",science);
printf("English\t\t\t%d\n",english);
printf("nepali\t\t\t%d\n",nepali);
printf("Computer\t\t\t%d\n",computer);
printf("--------------------------------------\n");
printf("Total marks:\t\t%d\n",maths+science+english+nepali+computer);
printf("==========================================================\n");
return 0;
}
