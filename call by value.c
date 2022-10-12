//call by value
#include<stdio.h>
void change(int a){
	printf("a=%d\n",a);
	a=20;
	printf("a=%d",a);
	
}
void main(){
	int p=5;
	printf("p=%d\n",p);
	change(p);
	printf("p=%d\n",p)
}
