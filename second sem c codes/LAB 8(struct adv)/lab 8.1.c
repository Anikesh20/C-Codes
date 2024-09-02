#include<stdio.h>
struct student{
char firstname[50];
int roll;
float marks;
}s[5];
int main(){
int i;
printf("enter information of students:\n");
//storing information
for(i=0;i<5;++i){
s[i].roll=i+1;
printf("\nfor roll number %d,\n",s[i].roll);
printf("enter first name ");
scanf("%s",s[i].firstname);
printf("enter marks: ");
scanf("%f",&s[i].marks);
}
printf("\ndisplaying information:\n\n");
//displaying info
for(i=0;i<5;++i){
printf("\nrollnumber:%d\n",i+1)
;
printf("first name:%s",s[i].firstname);

printf("\nmarks:%.1f",s[i].marks);
printf("\n");
}
return 0;
}

