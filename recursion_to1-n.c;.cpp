#include<stdio.h>
int n;
int rec(int i){
	while (n>=i){
		printf("%d",i);
		return rec(i+1);
	}
}
int main(){
	int i=1;
	printf("Enter the limit number\n");
	scanf("%d",&n);
	rec(i);
	return 0;
}
