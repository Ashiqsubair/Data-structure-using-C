#include<stdio.h>
int main()
{
	int f1=0,f2=1,fs=0,limit;
	printf("Enter the limit\n");
	scanf("%d",&limit);
	for(;fs<limit;){
		fs=f1+f2;
		printf("%d \t",f2);
		f1=f2;
		f2=fs;
	}
	return 0;
}
