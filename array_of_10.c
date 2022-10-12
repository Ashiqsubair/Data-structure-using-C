#include<stdio.h>
void main(){
	int a[10];
	for(int i=0;i<10;i++){
		printf("Enter the element for a[%d]",i+1);
		scanf("%d",&a[i]);
	}
	printf("The array is\n");
	int k=0;
	while(k<10){
		printf("a[%d] is %d\n",k+1,a[k]);
		k++;
	}
	printf("%d is i",i);
}
