#include<stdio.h>
int push(int stack[],int top){
	if(top==5){
		printf("Stack is full\n");
	}
	else{
		printf("Enter the value to push:\t");
		scanf("%d",stack[top+1]);
		top=top+1;
	}
	return 0;
}
int pop(int stack[],int top){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		stack[top]=NULL;
		top=top-1;
		printf("Top value is popped\n");
	}
	return 0;
}
int peek(int stack[],int top){
	int val;
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Top value is %d",stack[top]);
	}
	return 0;
}
int display(int stack[],int top){
	if(top==-1){
		printf("Stack is empty!!\n");
		
	}
	else{
		printf("%d",stack[top+1]);
		top=top-1;
	}
	return 0;
}
int main(){
	int top=-1;
	int ch=0;
	int stack[5];
	while(ch!=5){
		printf(" 1.Insert into stack\n 2.Delete from stack\n 3.Peek into stack\n 4.Display \n");
		scanf("%d",&ch);
		switch(ch){
		case 1:{
			push(stack,top);
			break;
		}
		case 2:{
			pop(stack,top);
			break;
		}
		case 3:{
			peek(stack,top);
			break;
		}
		case 4:{
			display(stack,top);
			break;
		}
		case 5:{
			break;
		}
		default:{
			printf("Wrong choice\n");
			break;
		}
	}
	}
	return 0;
}
