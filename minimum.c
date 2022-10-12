#include<stdio.h>
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
void main(){
	int a,b,c,x;
	printf("enter the number\n");
	scanf("%d%d%d",&a,&b,&c);
	x=min(a,b);
	x=min(x,c);
	printf("%d is the min",x);
}
