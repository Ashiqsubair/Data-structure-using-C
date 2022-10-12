#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n,i;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Memory not allocated.\n");
	}
	else{
		printf("Memory allocated.");
		ptr[0]=1;
		ptr[1]=1;
		for(i=0;i<n;i++){
			printf("%d,",ptr[i]);
		}
	}
	
}
