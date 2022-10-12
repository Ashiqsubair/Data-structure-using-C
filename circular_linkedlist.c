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
		head->next=head;
		
	}
	else{
		struct node *t;
		t=head;
		while(t->next!=head){
			t=t->next;
		}
		t=(struct node*)malloc(sizeof(struct node));
		t->next->data=val;
		t->next->next=head;
	}
}
void display(){
	struct node *t;
	if(head==NULL){
		printf("EMpty list");
	}
	else{
		t=head;
		do{
			printf("%d",t->data);
			t=t->next;
		}
		while(t!=head );
		
		
		
	}
}
