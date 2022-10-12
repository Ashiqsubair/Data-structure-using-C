#include<stdio.h>
int a[10];
int disp(int i,int n){
	if(i==n){
		return 0;
	}
	else{
		printf("%d\t",a[i]);
		disp(i+1,n);
	}
}
void main(){
	int n,i;
	printf("Enter the count of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=0;
	disp(i,n);
}
