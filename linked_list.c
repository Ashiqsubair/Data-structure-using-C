#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int val){
	struct node *t;
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->data=val;
		head->next=NULL;
	}
	else{
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=(struct node*)malloc(sizeof(struct node));
		t->next->data=val;
		t->next->next=NULL;
	}
}
void display(){
	struct node *t;
	if(head=NULL){
		
		for(t=head;t!=NULL;t=t->next){
			printf("%d",t->data);
		}
	}
}
void main(){
	insert(10);
	insert(10);
	insert(10);
	insert(10);
	display();
}
