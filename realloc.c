#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr,n,i;
	n=5;
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Memory not allocated\n");
		exit(0);
	}
	else{
		printf("memory allocated\n");
		for(i=0;i<n;++i){
			ptr[i]=i+1;
			printf("%d,",ptr[i]);
		}
		n=10;
		ptr=realloc(ptr,n*sizeof(int));
		for(i=5;i<n;++i){
			ptr[i]=i+1;
		}
		printf("THe new elements are:\n");
		for(i=0;i<n;++i){
			printf("%d,",ptr[i]);
		}
		free(ptr);
	}
}
