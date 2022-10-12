//call by reference

#include<stdio.h>
void change(int *a){
	printf("a=%d\n",*a);
	*a=20;
	printf("a=%d\n",*a);
}
void main(){
	int k=5;
	printf("k=%d\n",k);
	change(&k);
	printf("k=%d\n",k);
}
