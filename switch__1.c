#include<stdio.h>
void main(){
int ch,a[10],i,pos=0;
while(ch!=3){

printf("\n1.insert\n2.display\n3.exit\n");
scanf("%d",&ch);
switch(ch){
	case 1:
		printf("Enter the element\n");
		scanf("%d",&a[++pos]);
		break;
	case 2:
		printf("The elements are\n");
		for(i=1;i<=pos;i++){
			printf("%d\t",a[i]);
		}
		break;
	case 3:
		break;
	default:
		printf("Wrong entry\n");
		break;
}
}
}
