#include<stdio.h>
#include<string.h>
struct mystruct{
	int mynum;
	char myletter;
	char strin[20];
};
void main(){
	struct mystruct str;
	struct mystruct str2;
	str.myletter='a';
	str.mynum=10;
	str2.myletter='b';
	str2.mynum=20;
	//strcpy(str2.strin,'Ashiq');
	printf("the number is %d\n",str.mynum);
	printf("the character is %c\n",str.myletter);
	printf("the number is %d\n",str2.mynum);
	//printf("the character is %s\n",str2.strin);
	printf("the character is %c",str2.myletter);
}
