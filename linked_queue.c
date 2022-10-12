#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *f=NULL,*r=NULL;
void enque(int val){
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=val;
	t->next=NULL;
	if(f==NULL){
		f=t;
		r=t;
	}
	else{
		r->next=t;
		r=r->next;
	}
}
void deque(){
	if(f==NULL){
		printf("EMpty queue");
	}
	else{
		printf("%d",f->data);
		f=f->next;
		if(f==NULL){
			r=NULL;
		}
	}
}
void main(){
	enque(10);
	enque(10);
	enque(10);
	deque();
	deque();
	deque();
}
