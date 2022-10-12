#include<stdio.h>
void main(){
	int limit=0,a[10],b[10],c[10],i,j,half=0;
	printf("Enter the limit\n");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		printf("Enter the array[%d]",i+1);
		scanf("%d",&a[i]);
	}
	half=limit/2;
	for(i=0;i<half;i++){
		b[i]=a[i];
	}
	for(i=0;i<half;i++){
		printf("%d,",b[i]);
	}
	printf("\n");
	for(i=half;i>=half&&i<=limit;i++){
		c[i]=a[i];
	}
	for(i=half;i>=half&&i<limit;i++){
		printf("%d,",c[i]);
	}
	
}
