#include<stdio.h>
void main(){
	int pos=0,i,a[10],ch=1;
	while(ch!=3){
		printf("\n1.insert\n2.Display\n3.exit\n");
		scanf("%d",&ch);
		if(ch==1){
			if(pos+1<10){
				printf("Enter the element\n");
				scanf("%d",&a[++pos]);
			}
		
			else{
				printf("Array is full\n");
				}
			}
		else if (ch==2){
			printf("The elements are\n");
			for(i=0;i<=pos;i++){
				printf("%d,",a[i]);
			}
		}
}
}

