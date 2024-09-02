#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr;
int n,i;
n=5;
printf("Enter number of elements:%d\n",n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr=NULL){
	printf("memory not allocated.\n");
	exit(0);
}
else{
	printf("memory sucesfully allocated using calloc:\n");
	for(i=0;i<n;++i)
{
	ptr[i]=i+1;
}
printf("the elements of array are:");
for(i=0;i<n;++i){
	printf("%d",ptr[i]);
}
n=10;
printf("\n\nEnter the new size of the");
ptr = realloc(ptr,n * sizeof(int));
printf("memory sucessfully re-allocated");
for(i=5;i<n;++i){
	ptr[i]=i+1;
}
printf("the elements of array are:");
for(i=0;i<n;++i){
	printf("%d",ptr[i]);
	}
	free(ptr);
}
	return 0;
}

