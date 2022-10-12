#include<stdio.h>
struct term{
	int coef;
	int exp;
};
typedef struct term poly;
void main(){
	poly p[5];
	int i,n;
	printf("Enter the terms of polynomial.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the coefficient and exponent\n");
		scanf("%d%d",&p[i].coef,&p[i].exp);
	}
	for(i=0;i<n-1;i++){
		printf("%dx^%d",p[i].coef,p[i].exp);
		printf("%s",p[i+1].coef>0?"+":"");
	}
	if(p[i].exp==0){
	printf("%d",p[i].coef);
}
	
}
