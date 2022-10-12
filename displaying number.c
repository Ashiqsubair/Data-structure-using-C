#include<stdio.h>
void disp(int k)
{
	printf("%d,",k);
}
void print(int a,int b)
{
	disp(a);
	disp(b);
}
void main(){
	print(5,6);
}
