#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n,i,sum=0;
printf("Enter numbers of elements:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL ){
	printf("ERROR! memory not alloted");
	exit(0);
}
printf("Enter elements:");
for(i=0;i<n;++i){
	scanf("%d",ptr+i);
	sum +=*(ptr+i);
}
printf("Sum=%d",sum);
free(ptr);
return 0;
}

