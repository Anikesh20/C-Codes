#include<stdio.h>
#include<string.h>
struct employee
{
int id;
char name[50];
float salary;
}e1;
int main()
{
e1.id=101;
strcpy(e1.name,"Hari");
e1.salary=50000;
printf("employee 1 id:%d\n",e1.id);
printf("employee 1 name:%s\n",e1.name);
printf("employee 1 salary:%.2f",e1.salary);
return 0;
}

