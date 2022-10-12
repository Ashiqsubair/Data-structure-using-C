#include<stdio.h>
int top=-1;
int stack[4];
void push(int val){
	if(top==3){
		printf("Stack is full\n");
	}
	else{
		top++;
		stack[top]=val;
		
			
	}
}
void pop(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Top value is popped\n");
		top--;
	}
}
void peek(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Top value is %d",stack[top]);
}
}
int main(){
	int ch,val;
	while(ch!=5){
		printf(" 1.Insert into stack\n 2.Delete from stack\n 3.Peek into stack\n 4.Display \n");
		scanf("%d",&ch);
		switch(ch){
		case 1:{
			printf("Enter the value to push:\t");
			scanf("%d",&val);
			push(val);
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			peek();
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
