#include<stdio.h>
int mat_addition(int a[][2],int b[][2] ){
	int sum[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of the matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
int mat_subtract(int a[][2],int b[][2] ){
	int diff[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			diff[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("The difference of the matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",diff[i][j]);
		}
		printf("\n");
	}
}


void main(){
	int i,j,a[2][2],b[2][2];
	printf("Enter 4 value for first matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			
		}
		
	}
	printf("Enter 4 value for Second matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	mat_addition(a,b);
	mat_subtract(a,b);
}
