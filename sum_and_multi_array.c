#include<stdio.h>
void main(){
	int a[10]={1,2,3,4,5,6},i,sum=0,multi=1;
	for(i=0;i<6;i++){
		sum=sum+a[i];
		multi=multi*a[i];
	}
	printf("sum is %d and product is %d",sum,multi);
}
