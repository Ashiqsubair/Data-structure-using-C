#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *ptr=NULL;
struct node *head=NULL;
void insert(int val){
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->data=val;
		head->next=NULL;
	}
	else{
		ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=(struct node*)malloc(sizeof(struct node));
		ptr->next->data=val;
		ptr->next->next=NULL;
	}
}
void display(){
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d,",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void delete(){
	head=head->next;
}
void main(){
	int ch,val;
	while(1){
		printf("Enter your choice.\n1.Insert into linked list. \t 2.Display linked list. \t 3.Delete from front.\n");
		scanf("%d",&ch);
		switch(ch){
		case 1:{
			printf("Enter the number to insert :");
			scanf("%d",&val);
			insert(val);
			break;
		}
		case 2:{
			display();
			break;
		}
		case 3:{
			delete();
			break;
		}
		case 4:{
			exit(0);
			break;
		}
		default:{
			printf("Wrong choice\n");
			break;
		}
			
	}
	}
}
