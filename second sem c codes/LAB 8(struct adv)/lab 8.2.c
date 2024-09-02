#include<stdio.h>
#include<string.h>
struct employee{
int id;
char name[30];
float salary;
char address[30];
}e[100];
int main(){
int n,i;
printf("Enter total number of employees:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Enter the id, name, address and salary of the employee:\n");
scanf("%d%s%s%f",&e[i].id,e[i].name,e[i].address,&e[i].salary);
}
for(i=1;i<=n;i++){
if(0==strcmp(e[i].address ,"biratnagar")){
printf("\n\n%s",e[i].name);
}}
return 0;
}

