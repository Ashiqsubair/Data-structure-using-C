#include<stdio.h>
int total;
int sum(int num){
	int last_num;
	while(num>0){
	last_num=num%10;
	total=total+last_num;
	num=num/10;
	return sum(num);
	}
	return 0;
}
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	sum(num);
	printf("The total is %d",total);
}
