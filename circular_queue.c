#include<stdio.h>
int f=-1,r=-1;
int q[5];
void enqueue(int e){
	if(((r+1)%5)==f){
		printf("\nQueue is full\n");
	}
	else{
		if(f==-1){
			f=0;
		}
		r=((r+1)%5);
		q[r]=e;
	}
}
void dequeue(){
	if(f==-1){
		printf("Queue is empty");
		
	}
	else{
		printf("item is %d\n",q[f]);
		if(f==r){
			f=r=-1;
		}
		else{
			f=((f+1)%5);
			
		}
	}
}
void main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(50);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
}
