#include<stdio.h>
int reverse(int num){
	int last_num,reverse_num,temp;
	reverse_num=0;
	temp=num;
	while(num>0){
		last_num=num%10;
		reverse_num=reverse_num*10+last_num;
		num=num/10;
	}
	if(reverse_num==temp){
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	int num,x;
	printf("Enter the number\n");
	scanf("%d",&num);
	x=reverse(num);
	printf("%d",x);
}
