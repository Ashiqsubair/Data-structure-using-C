#include<stdio.h>
void determinant(int row){
	int arr[3][3],i,j;
	if(row==2){
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Enter the element for arr[%d][%d]",i,j);
				scanf("%d",&arr[i][j]);
			}
		}
		
		printf("determinant value of 2x2 matrix is %d",arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]);
	}
	else{
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Enter the element for arr[%d][%d]",i,j);
				scanf("%d",&arr[i][j]);
			}
		}
		printf("determinant value of 3x3 matrix is %d",(arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])))-(arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0])))+(arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]))));
	}
}
void main(){
	int row;
	printf("Enter the row of matrix: \t");
	scanf("%d",&row);
	determinant(row);
}
