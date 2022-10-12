#include<stdio.h>
#define size 10
int a[size],pos=0,j,i;
void read(){
	if(pos==size){
		printf("The array is full.\n");
	}
	else{
		printf("Enter the element:\t");
		scanf("%d",&a[pos]);
		pos=pos+1;
	}
}
void display(){
	for(i=0;i<size;i++){
		printf("%d,",a[i]);
	}
}
void sort(){
	int temp;
	temp=a[i];
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
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
		printf("%d,",a[j]);
	}
}

void main(){
	int ch=0;
	
	while(ch!=4){
		printf("\n1.insert in array.\n2.Displaying array.\n3.Sort array.\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:{
				read();
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				sort();
				break;
			}
			case 4:{
				
				break;
			}
		}
	}
}
