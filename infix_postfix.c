#include<stdio.h>
#include <ctype.h>
int top=0;
int main(){
	char exp[10];
	int val,val2;
	char stack[10];
	stack[0]=0;
	int i;
	printf("Enter the expression\t");
	scanf("%s",&exp);
	for(i=0;i<10;i++){
		if(isalnum(exp[i])){
			printf("%c",exp[i]);
		}
		else{
			val=prior(exp[i]);
			val2=prior(stack[top]);
			if(val>=val2){
				stack[top]=exp[i];
				top=top+1;
			}
			else{
				printf("%c",stack[top]);
				top=top-1;
			}
		}
	}
return 0;	
}
int prior(char x)
{
	if(x=='+'|| x=='-'){
		return 1;
	}
	else if(x=='*'||x=='/'){
		return 2;
	}
	return 0;
}
