#include<stdio.h>
#define N 5
int front=-1;
int rear=-1;
int queue[N];
void main(){
	enqueue(10);
	enqueue(11);
	enqueue(12);
	enqueue(13);
	enqueue(14);
	dequeue();
	dequeue();
	dequeue();
}
void enqueue(int x){
	if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%N==front){
		printf("Queue is full\n");
	}
	else{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}
void dequeue(){
	if(rear==-1 && front==-1){
		printf("queue is empty\n");
	}
	else if(front == rear){
		front=rear=-1;
	}
	else{
		printf("%d is popped\n",queue[front]);
		front=(front+1)%N;
	}
}
