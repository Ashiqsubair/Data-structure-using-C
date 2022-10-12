#include<stdio.h>
int multi(int a[][2],int b[][2]){
	int i,j,k,c[2][2];
	for(i=0;i<2;i++)
	{
	printf("\n");
	for(j=0;j<2;j++)
	{
	c[i][j]=0;
	for(k=0;k<2;k++)
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d\t",c[i][j]);	
		}
		printf("\n");
	}
	return 0;
	}

int main(){
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
	multi(a,b);
	
}
