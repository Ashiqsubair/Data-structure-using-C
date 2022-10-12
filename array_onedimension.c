#include<stdio.h>
void main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("Enter the array %d\t",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("array[%d]=%d\n",i+1,a[i]);
	}
}
