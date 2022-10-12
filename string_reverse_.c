#include<stdio.h>
#include<string.h>
char ch;
int top=-1;
char stack[10],string[10];
void main(){
	int i;
	printf("Enter the string\n");
	scanf("%s",&string);
	for(i=0;i<strlen(string);i++){
		push(string[i]);
	}
	pop();
}
void push(char ch){
	int i;
	if(top==9){
		printf("Stack is full\n");
	}
	else{
		top=top+1;
		stack[top]=ch;
		printf("%c is pushed\n",stack[top]);
	}
}
void pop(){
	if(top==-1){
		printf("Stack is empty!!");
	}
	else{
		printf("The reverse order of string:\n");
		for(;top>=0;top--){
			printf("%c",stack[top]);
		}
	
	}
		
	}

