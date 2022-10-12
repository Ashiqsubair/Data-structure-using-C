#include<stdio.h>
void main(){
	int *p;
	int a=20;
	printf("%d is a\n",a);
	p=&a;
	printf("%d is the address of a\n",p);
	printf("%d is the value of a",*p);
}
