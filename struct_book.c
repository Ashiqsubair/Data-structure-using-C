#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct books{
	char author_name[20];
	char book_name[20];
};
char name[20];
char b_name[20];
int n,i;
struct books *ptr;
int insert(){
		printf("Enter the number of books that you want to add!!.\n");
		scanf("%d",&n);
		getchar();
		ptr=(struct books*)malloc(n*sizeof(struct books));
		for(i=0;i<n;i++){
			printf("\nEnter the Author name: ");
			gets(ptr[i].author_name); 
			printf("Enter the Book name: ");
			gets(ptr[i].book_name);
		}
		return n;
	}
void display(int n){
	int i;
	printf("\n\t\t\t\t Displaying Book Details");
	for(i=0;i<n;i++){
		printf("\nAuthor name : %s\n",ptr[i].author_name);
		printf("Book name : %s\n",ptr[i].book_name);
		printf("\n");
	}
}
void main(){
	int n;
	n=insert();
	display(n);
}
