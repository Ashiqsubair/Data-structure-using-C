#include<stdio.h>
#include<stdlib.h>
void main(){
	int *p;
	p=(int *)malloc(sizeof(int));
	printf("Enter the no:");
	scanf("%d",p);
	printf("value of p is %d",p);
}
