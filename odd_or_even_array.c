#include<stdio.h>
void main(){
	int a[6]={1,3,5,7,9},i;
	for(i=0;i<6;i++){
		if(a[i]%2==0){
			a[i]=0;
		}
		else{
			a[i]=1;
		}
	}
	for(i=0;i<6;i++){
		printf("%d,",a[i]);
	}
}
