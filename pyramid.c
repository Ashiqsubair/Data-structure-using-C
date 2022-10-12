#include<stdio.h>
void main(){
	int limit,i,j;
	printf("Enter the limit\n");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%d\t",j);
		}
	}
	printf("\n---------------------------------------");
	
	for(i=limit;i>=1;i--){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%d\t",j);
		}
	}
}
