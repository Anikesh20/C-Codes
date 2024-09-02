#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr;
int n,i;
printf("Enter numbers of elements:");
scanf("%d",&n);
ptr=(int*)malloc(n * sizeof(int));
if(ptr==NULL ){
	printf("memory not alloted");
	exit(0);
}
else{
	printf("memory sucessfully alloted using malloc");
for(i=0;i<n;i++){
	ptr[i]=i+1;
}
printf("\nthe elements of array are:");
for(i=0;i<n;i++){
	printf("%d",ptr[i]);
}
}
return 0;
}
