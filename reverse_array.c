#include<stdio.h>
void main(){
	int a[7]={1,2,3,4,5,7,8},i,j,k,b[7];
	for(i=6,j=0;i>=0;i--,j++){
		b[j]=a[i];
	}
	
	for(k=0;k<6;k++){
		printf("%d,",b[k]);
	}
}
