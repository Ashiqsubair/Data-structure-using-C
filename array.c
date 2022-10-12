//displaying an array
#include<stdio.h>
void main(){
	int i, a[10];
	for(i=0;i<10;i++){
		printf("Enter the number %d: \t",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		printf("%d number is %d\n",i,a[i]);
	}
}
