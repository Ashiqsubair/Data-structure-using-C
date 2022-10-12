#include<stdio.h>
int a[5]={10,38,44,55,10},count=0;
void main(){
	
	int val,val2,flag=0,i,count_val=0;
	printf("Enter the search element\t:");
	scanf("%d",&val);
	search(val);
	printf("\nenter the repeated element\t:");
	scanf("%d",&count_val);
	coun(count_val);
	
}
int search(int val){
	int i,flag=0;
	for(i=0;i<5;i++){
		if(val==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Element found on %d position",i+1);
	}
	else{
		printf("Element not found\n");
	}
	return 0;
}
int coun(int count_val){
	int i;
	for(i=0;i<5;i++){
		if(count_val==a[i]){
			count=count+1;
		}
	}
	printf("The given number %d is repeated %d times",count_val,count);
}
