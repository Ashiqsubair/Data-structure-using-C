#include<stdio.h>
void main(){
	int i=0,n,a[10],sum=0;
	printf("Enter the limit\t");
	scanf("%d",&n);
	while(i<n){
		printf("Enter the element %d\t",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
		i++;
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n%d is the sum",sum);
}
