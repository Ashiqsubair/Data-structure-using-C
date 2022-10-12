#include<stdio.h>
void print(int a,int b){

int i,j;
for(i=a,j=a;j<=b || i>=b;i-- &&j++){
	if(i>=b){
		printf("%d\t",i);
		
	}
	else
	{
		printf("%d\t",j);
	}
}
}
void main(){
	int a,b;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	print(a,b);
}
