
#include<stdio.h>
int main(){
int a[7],i,j,temp;
printf("Enter the array elements\n");
for(i=0;i<7;i++){
scanf("%d",&a[i]);
}
for(i=0;i<7;i++){
for(j=0;j<7;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Array Elements\n");
for(i=0;i<7;i++){
printf("%d\n",a[i]);
}
return 0;
}

