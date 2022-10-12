#include<stdio.h>
int coeff[5],exp[5],el;
void main(){
	int i;
	printf("Enter the number of element\t:");
	scanf("%d",&el);
	for(i=0;i<el;i++){
		printf("Enter the coefficient and exponent:\n");
		scanf("%d%d",&coeff[i],&exp[i]);
	}
	for(i=0;i<el-1;i++){
		printf("%dx^%d%s",coeff[i],exp[i],coeff[i+1]>0?"+":"");
	}
	printf("%d",coeff[i]);
}
