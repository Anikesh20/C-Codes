#include<stdio.h>
#include<conio.h>
struct student{
	
int rollno;
	char name[20];
	int submarks[4];
	};
	
	int main(){
		int i,j;
		struct student stuarr[3];
		
		for(i=0;i<3;i++){
		printf("enter data for students %d\n",i+1);
		printf("Name\n");
		scanf("%s",&stuarr[i].name);
			printf("Roll number\n");
		scanf("%d",&stuarr[i].rollno);
			for(j=0;j<4;j++){
	printf("Enter subjects marks %d\n",j+1);

	
		scanf("%d",&stuarr[i].submarks[j]);}}
			for(i=0;i<3;i++){
				printf("Data of student %d\n",i+1);
					printf("\nname= %s\nrollnummber= %d\n",stuarr[i].name,stuarr[i].rollno);
			}
		for(j=0;j<4;j++){
	printf("%d\n",stuarr[i].submarks[j]);}}
	
