#include<stdio.h>
int coeff1[5],exp1[5],el,coeff2[5],exp2[5],res_coeff[5];
void main(){
	int i;
	printf("Enter the number of element\t:");
	scanf("%d",&el);
	for(i=0;i<el;i++){
		printf("Enter the coefficient and exponent first polynomial:\n");
		scanf("%d%d",&coeff1[i],&exp1[i]);
	}
	for(i=0;i<el;i++){
		printf("Enter the coefficient and exponent of second polynomial:\n");
		scanf("%d%d",&coeff2[i],&exp2[i]);
	}
	
	//adding polynomial
	
	for(i=0;i<el;i++){
		res_coeff[i]=coeff1[i]+coeff2[i];
	}
	
	for(i=0;i<el-1;i++){
		printf("%dx^%d%s",coeff1[i],exp1[i],coeff1[i+1]>0?"+":"");
		
	}
	printf("%d",coeff1[i]);
	printf("\n");
	for(i=0;i<el-1;i++){
		printf("%dx^%d%s",coeff2[i],exp2[i],coeff2[i+1]>0?"+":"");
		
	}
	printf("%d",coeff2[i]);
	printf("\n====================================================\n");
	for(i=0;i<el-1;i++){
		printf("%dx^%d%s",res_coeff[i],exp1[i],res_coeff[i+1]>0?"+":"");
	}
	printf("%d",res_coeff[i]);
}


