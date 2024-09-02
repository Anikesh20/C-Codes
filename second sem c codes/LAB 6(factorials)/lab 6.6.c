#include<stdio.h>
int main(){
	char name[50],program[20];
	float cgpa;
	int i,n;
	FILE *fp;
	fp=fopen("MARKS.txt","a");
	printf("enter number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter name,program and CGPA:");
		scanf("%s%s%f",&name,&program,&cgpa);

	fprintf(fp,"%s%s%f",name,program,cgpa);
	fclose(fp);
}
	for(i=0;i<n;i++){
		if(cgpa>=3.0){
		printf("\nname=%s\nprogram=%s\ncgpa=%f",name,program,cgpa);
		}
	}
}
