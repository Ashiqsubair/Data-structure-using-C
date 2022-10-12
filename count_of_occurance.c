#include<stdio.h>
void main(){
	int i,a[10],count=0,value;
	for(i=0;i<10;i++){
		printf("Enter the number for a[%d]:\t",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be searched");
	scanf("%d",&value);
	for(i=0;i<10;i++){
		if(value==a[i]){
			count=count+1;
			printf("Element is present in %d position.\n",i+1);
		}
		
	}
	printf("Total count of number '%d' is %d times",value,count);
}
