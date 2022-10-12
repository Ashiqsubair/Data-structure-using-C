#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int val){
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=val;
	t->next=top;
	top=t;
}
void pop(){
	if(top==NULL){
		printf("Stack is empty");
	}
	else{
		printf("%d",top->data);
		top=top->next;
	}
}
void main(){
	push(10);
	push(10);
	push(10);
	push(10);
	pop();
	pop();
	pop();
	pop();
}
