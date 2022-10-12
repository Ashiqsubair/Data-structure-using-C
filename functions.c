//functions

#include<stdio.h>
void disp(){
	printf("display function\n");
}
void print(){
	disp();
	printf("print function\n");
	disp();
}

void main(){
	printf("\n main function\n");
	disp();
	print();
}
