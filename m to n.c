//display from m to n using while loop

#include<stdio.h>

void main(){
	int m,n;
	printf("enter the value for m and n\n");
	scanf("%d%d",&m,&n);
	while(m!=n){
		if (m>=n){
			printf("%d",m);
			m++;
		}
		else{
			printf("%d",m);
			m--;
		}
	}
}
