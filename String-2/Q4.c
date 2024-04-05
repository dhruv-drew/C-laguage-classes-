#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	printf("Enter your name: ");
	gets(name);
	char cpy_name[100];
	
	strcpy(cpy_name,name);
	printf("The copied string is :");
	puts(cpy_name);
}
	

