#include<stdio.h>
int num,pos=-1,search_num,i,pos_delete,j,temp,ch,size=10;
int a[10];
void insert(int num){
	if(pos+1==10){
		printf("Array is full");
	}
	else{
		a[pos+1]=num;
		pos=pos+1;
	}
}
void search(int search_num){
	for(i=0;i<size;i++){
		if(search_num==a[i]){
			printf("The element is found in %d position.\n",i);
		}
	}
}
void delete(int pos_delete){
	for(i=pos_delete;i<size;i++){
		a[i]=a[i+1];
	}
	size=size-1;
	for(i=0;i<size;i++){
		if(a[i]==0){
			continue ;
		}
		else{
			printf("%d,",a[i]);
		}
		
		}
			
	}
void sort(){
	temp=a[i];
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]<a[j]){
				a[i]=a[i];
			}
			else{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(j=0;j<size;j++){
		if(a[j]==0){
			continue ;
		}
		else{
			printf("%d,",a[j]);
		}
		
	}
}

void main(){
	do{
		printf("\n1.Insert a value.\n2.Search a position\n3.Delete number on position.\n4.Sort Array\n5.Exit\n");
		scanf("%d",&ch);
	
				switch(ch){
					case 1 :{
						printf("Enter the number to insert.:");
						scanf("%d",&num);
						insert(num);
						break;
						
					}
					case 2 :{
						printf("Enter the number to search.:");
						scanf("%d",&search_num);
						search(search_num);
						break;
					}
					case 3:{
						printf("Enter the position to delete.:");
						scanf("%d",&pos_delete);
						delete(pos_delete);
						
						break;
					}
					case 4:{
						sort();
						break;
					}
					case 5:{
						
						break;
					}
					default:{
						printf("Wrong Choice\n");
						break;
					}
				}
			}
			while(ch!=5);


}
