#include<stdio.h>
#define n 3
#include<string.h>
struct employee{
	int empno;
	char ename[10];
	int esalary;
	int dno;
};
struct employee s[n];
struct employee temp;
void main(){
	int i,ch;
	for(i=0;i<n;i++){
		printf("\t\t\t%d employee details\n\n",i+1);
		printf("Enter the Empno:");
		scanf("%d",&s[i].empno);
		printf("Enter the Empname:");
		scanf("%s",&s[i].ename);
		printf("Enter the Esalary:");
		scanf("%d",&s[i].esalary);
		printf("Enter the Department no::");
		scanf("%d",&s[i].dno);
	}
	while(ch!=5){
		printf("1.Search employee\n2.Sort employee by name\n3.Sort employee by salary\n4.Delete employee");
		scanf("%d",&ch);
		switch(ch){
		case 1:{
			search();
			break;
		}
		case 2:{
			sort_name();
			break;
		}
		case 3:{
			sort_Salary();
			break;
		}
		case 4:{
			delete();
			break;
		}
		default:{
			printf("invalid choice");
			break;
		}
	}
	}
	
	
	
	
	
}
void search(){
	int num,i,flag=0;
	printf("Enter the employee number :");
	scanf("%d",&num);
	
	for(i=0;i<n;i++){
		if(s[i].empno==num){
			printf("Employee number:%d\nEmployee name %s\nEmployee Salary: %d\nDepartment number :%d\n",s[i].empno,s[i].ename,s[i].esalary,s[i].dno);
			flag=1;
		}
	}
	if(flag==0){
		printf("Invalid employee number\n");
	}
}
void sort_name(){
	int i,j;
   	struct employee temp;
   	for(i=0;i<n;i++){
   		for(j=i+1;j<n;j++){
   			if(strcmp(s[i].ename,s[j].ename)>0){
      			temp=s[i];
      			s[i]=s[j];
      			s[j]=temp;
   			}
		}
	   }
	   printf("\n\n\nSorted list\n");
   	for(i=0;i<n;i++){
   		printf("Employee number:%d\n Employee name:%s\nEmployee salary: %d\nDepartment: %d",s[i].empno,s[i].ename,s[i].esalary,s[i].dno);
	   }
   			
}

void sort_Salary(){
	int i,j;
   	struct employee temp;
   	for(i=0;i<n;i++){
   		for(j=i+1;j<n;j++){
   			if(s[i].esalary>=s[j].esalary){
      			temp=s[i];
      			s[i]=s[j];
      			s[j]=temp;
   			}
		}
	   }
	   printf("\n\n\nSorted list based on Salary\n");
   	for(i=0;i<n;i++){
   		printf("Employee number:%d\n Employee name:%s\nEmployee salary: %d\nDepartment: %d",s[i].empno,s[i].ename,s[i].esalary,s[i].dno);
	   }
   			
}
void delete(){
	int del_data,i;
	printf("Enter the employee number of employee to delete\t:");
	scanf("%d",&del_data);
	for(i=0;i<n;i++){
		if(s[i].empno==del_data){
			s[i]=s[i+1];
		}
	}
	for(i=0;i<n;i++){
		printf("Employee number:%d\n Employee name:%s\nEmployee salary: %d\nDepartment: %d\n\n\n",s[i].empno,s[i].ename,s[i].esalary,s[i].dno);
	}
	
}
