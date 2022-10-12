#include<stdio.h>
struct polynomial{
	int coeff;
	int exp;
};
struct polynomial poly[2];
void main(){
	int i,el,j;
	printf("Enter the number of element\t:");
	scanf("%d",&el);
	for(j=0;j<2;j++){
		for(i=0;i<el;i++){
		printf("Enter the coefficient and exponent %d polynomial:\n",j+1);
		scanf("%d%d",&poly[i].coeff,&poly[i].exp);
	}
	}
	
	//displaying polynomial
	for(j=0;j<2;j++){
		for(i=0;i<el;i++){
		printf("%dx^%d%s",poly[j].coeff,poly[j].exp,poly[j+1].coeff>0?"+":"");
	}
	printf("%d\n",poly[j].coeff);
	}
}
