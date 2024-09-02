#include<stdio.h>
int main(){
	int a[3][3],t[3][3];
	int i,j;
	printf("enter first matrix");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){

t[i][j]=a[j][i];
}
}
printf("transpose of matrix is\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\t",t[i][j]);

}
printf("\n");
}

return 0;
}

