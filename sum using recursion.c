#include<stdio.h>
int recursion(int a){
	int n;
	if(a==0){
		return 0;
	}
	else{
		return a+recursion(a-1);
	}
}
void main(){
	int a;
	a=recursion(5);
	printf("%d",a);
}
