#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node *p,*x;
struct node *root=NULL;
void insert(int e){
	if(root==NULL){
		root=(struct node*)malloc(sizeof(struct node));
		root->data=e;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		x=root;
		while(x!=NULL){
			p=x;
			if(e<x->data){
				x=x->left;
			}
			else if(e>x->data){
				x=x->right;
			}
		}
		if(e<p->data){
			p->left=(struct node*)malloc(sizeof(struct node));
			p->left->data=e;
			p->left->left=NULL;
			p->left->right=NULL;
		}
		else if(e>p->data){
			p->right=(struct node*)malloc(sizeof(struct node));
			p->right->data=e;
			p->right->left=NULL;
			p->right->right=NULL;
		}
	}
}
void inorder(struct node *t){
	if(t!=NULL){
		inorder(t->left);
		printf("%d,",t->data);
		inorder(t->right);
	}
}
void preorder(struct node *o){
	if(o!=NULL){
		printf("%d,",o->data);
		preorder(o->left);
		preorder(o->right);
	}
}

void postorder(struct node *post){
	if(post!=NULL){
		postorder(post->left);
		postorder(post->right);
		printf("%d,",post->data);
	}
}
void main(){
	insert(30);
	insert(50);
	insert(20);
	insert(22);
	insert(15);
	struct node *t=root;
	inorder(t);
	printf("\n");
	struct node *o=root;
	preorder(o);
	printf("\n");
	struct node *post=root;
	postorder(post);
}
