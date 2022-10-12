#include<stdio.h>
int main(){
	int a[10],i,search,flag=0;
	for(i=0;i<10;i++){
		printf("Enter the array[%d]\t",i+1);
		scanf("%d",&a[i]);
	}
	printf("Search element is\t");
	scanf("%d",&search);
	for(i=0;i<10;i++){
		if(a[i]==search){
			printf("Searched element is found in a[%d]=%d",i+1,a[i]);
			flag=1;
		}
		else{
			flag=0;
		}
	}
	if(flag==0){
		printf("Element not found");
		
	}
	return 0;
}
