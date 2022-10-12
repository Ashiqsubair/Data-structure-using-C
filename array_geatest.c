#include<stdio.h>
void main(){
	int a[10],i,m=0,n=0;
	for(i=0;i<5;i++){
		printf("Enter the number fo array[%d]",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
		{
		
		if(a[i]>a[i+1]){
			m=a[i];
			a[i+1]=m;
			
		}
	}
	printf("The greatest number is %d",m);
	printf("The smallest number is %d",n);	
	
}
