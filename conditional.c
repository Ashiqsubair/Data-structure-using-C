#include<stdio.h>
void main(){
	int a,b,c,result;
	printf("enter the numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	result=(a>b && a>c)?a:((b>a&&b>c)?b:c);
	printf("%d is greater",result);
}

